CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT(WeNeedMetal CXX)

SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY bin)
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY bin)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

SET(CMAKE_CXX_COMPILER clang++)
SET(CMAKE_CXX_FLAGS "-std=c++11 -W -Wall")

ADD_SUBDIRECTORY(./libs)

INCLUDE_DIRECTORIES(./include/)

SET(SRC_CL
    src/cl/cl.cpp
    src/cl/screen.cpp
    src/cl/settings.cpp
    src/cl/gui/base.cpp
    src/cl/gui/game.cpp
)

ADD_EXECUTABLE(weneedmetal src/client.cpp ${SRC_CL})

TARGET_LINK_LIBRARIES(weneedmetal glfw)
