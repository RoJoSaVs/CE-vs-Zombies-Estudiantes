cmake_minimum_required(VERSION 3.14)
project(CE-vs-Zombies-Estudiantes)


include(FindPkgConfig)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Core Gui Widgets Multimedia REQUIRED)

add_executable(CE-vs-Zombies-Estudiantes main.cpp ObjetosDeJuego/ObjetoDeJuego.cpp ObjetosDeJuego/ObjetoDeJuego.h ObjetosDeJuego/ID.h ObjetosDeJuego/ID.cpp)
target_link_libraries(CE-vs-Zombies-Estudiantes Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Multimedia)