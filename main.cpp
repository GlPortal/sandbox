#include <radix/env/Util.hpp>
#include <radix/env/Environment.hpp>
#include <radix/env/ArgumentsParser.hpp>
#include <radix/core/diag/Throwables.hpp>

#include "Game.hpp"


int main(int argc, char* argv[]) {
  radix::Util::Init();
  radix::Environment::init();
  radix::ArgumentsParser::setEnvironmentFromArgs(argc, argv);
  try {
    Game game;
    game.setup();
    while (game.isRunning()) {
      game.preCycle();
      game.processInput();
      game.update();
      game.render();
      game.postCycle();
    }
    game.cleanUp();
  } catch (radix::Exception::Error &err) {
    radix::Util::Log(radix::Error, err.source()) << err.what();
    return -1;
  } catch (std::runtime_error &err) {
    radix::Util::Log(radix::Error, "Main") << err.what();
    return -1;
  }

  return 0;
}
