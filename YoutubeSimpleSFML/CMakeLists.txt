cmake_minimum_required(VERSION 3.0.0)
project(SimpleSfml VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(SimpleSfml main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_include_directories(SimpleSfml PUBLIC include)

find_package(SFML 2.5 COMPONENTS audio graphics network  system window system REQUIRED)

target_link_libraries(SimpleSfml sfml-audio sfml-graphics sfml-network sfml-system sfml-window)

if(NOT EXISTS ${PROJECT_BINARY_DIR}/.gitignore)
  file(WRITE ${PROJECT_BINARY_DIR}/.gitignore "*")
endif()