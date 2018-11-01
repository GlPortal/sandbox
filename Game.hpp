#ifndef SANDBOX_GAME_HPP
#define SANDBOX_GAME_HPP
#include "radix/BaseGame.hpp"


class Game : public radix::BaseGame {
public:
  Game();

  ~Game() override;

  void onPreStartWorld() override;

protected:
  std::unique_ptr<radix::SubRenderer> mGameRenderer;
};


#endif //SANDBOX_GAME_HPP
