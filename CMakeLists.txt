cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
project(sandbox CXX)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(RadixEngine REQUIRED)

add_executable(
        ${PROJECT_NAME}
        main.cpp
        Game.cpp
        GameRenderer.cpp
)

target_link_libraries(
        ${PROJECT_NAME}
        PRIVATE
        Radix
)

set_target_properties(
        ${PROJECT_NAME}
        PROPERTIES
        CXX_STANDARD 14
)

target_compile_options(
        ${PROJECT_NAME}
        PUBLIC
        $<$<CXX_COMPILER_ID:Clang>:-Wall -Weverything -Wno-c++98-compat -Wno-c++98-compat-pedantic -Wc++14-compat-pedantic>
        $<$<CXX_COMPILER_ID:GNU>:-pedantic -Wall -Wextra>
        $<$<CXX_COMPILER_ID:MSVC>:/W4>
)
