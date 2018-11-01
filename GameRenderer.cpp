#include "GameRenderer.hpp"

#include <radix/core/gl/OpenGL.hpp>


GameRenderer::GameRenderer(radix::World &w, radix::Renderer &ren) : SubRenderer(w, ren) {}

void GameRenderer::render() {
  glClearColor(1, 0, 0, 1);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

