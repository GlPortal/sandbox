#include "Game.hpp"
#include "GameRenderer.hpp"


Game::Game() {
  this->defaultMap = "/maps/n1.xml";
  this->windowTitle = "GlPortal";
}

void Game::onPreStartWorld() {
  radix::World& worldReference       = *this->world.get();
  radix::Renderer &rendererReference = *renderer.get();
  mGameRenderer = std::make_unique<GameRenderer>(worldReference, rendererReference);

  renderer->addRenderer(*mGameRenderer);
}

Game::~Game() = default;
