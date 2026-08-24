# ============================================================================
# LOGISTICS-DSA | BUILD SYSTEM
# ============================================================================
# PRODUCTION ROLE:
#   The single source of truth for how the C++ project is compiled, linked,
#   tested, and eventually extended with visualization dependencies.
#
# BUILD RESPONSIBILITIES:
#   - Define the project and required C++ standard.
#   - Build the core logistics library from src/.
#   - Build the CLI simulator application.
#   - Build tests.
#   - Later: optionally build a visualization application.
#
# CONNECTIONS:
#   include/  -> public interfaces consumed by src/ and applications.
#   src/      -> implementation compiled into the core library.
#   apps/     -> executable entry points.
#   tests/    -> test executables.
#
# DSA / SYSTEMS LESSON:
#   Build systems are infrastructure. Keep compilation concerns separate
#   from business logic.
#
# IMPLEMENTATION ORDER:
#   1. Core library target.
#   2. Simulator executable.
#   3. Tests.
#   4. Visualization executable/dependency only after core simulation works.
#
# DO NOT:
#   - Put logistics/business logic here.
#   - Hard-code source files in a way that becomes difficult to maintain.
#   - Introduce visualization dependencies before the core engine is stable.

cmake_minimum_required(VERSION 3.20)

project(logistics_dsa LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB_RECURSE LOGISTICS_CORE_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)
list(REMOVE_ITEM LOGISTICS_CORE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")

add_library(logistics_core ${LOGISTICS_CORE_SOURCES})
target_include_directories(logistics_core PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

add_executable(logistics_simulator src/main.cpp)
target_link_libraries(logistics_simulator PRIVATE logistics_core)

enable_testing()
