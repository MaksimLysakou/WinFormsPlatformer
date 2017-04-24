cmake_minimum_required(VERSION 3.7)
project(WinFormsPlatformer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        WinFormsPlatformer/Block.cpp
        WinFormsPlatformer/Block.h
        WinFormsPlatformer/Database.h
        WinFormsPlatformer/Database.cpp
        WinFormsPlatformer/Game.cpp
        WinFormsPlatformer/Game.h
        WinFormsPlatformer/Level.cpp
        WinFormsPlatformer/Level.h
        WinFormsPlatformer/main.cpp
        WinFormsPlatformer/Player.cpp
        WinFormsPlatformer/Player.h)

add_executable(WinFormsPlatformer ${SOURCE_FILES})