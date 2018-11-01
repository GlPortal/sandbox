#ifndef GAME_RENDERER_HPP
#define GAME_RENDERER_HPP
#include <radix/renderer/SubRenderer.hpp>


class GameRenderer : public radix::SubRenderer {
public:
  GameRenderer(radix::World &w, radix::Renderer &ren);

  void render() override;

};
#endif //! GAME_RENDERER_HPP