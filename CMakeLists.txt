project(CE-vs-Zombies-Estudiantes)
cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


add_executable(CE-vs-Zombies-Estudiantes main.cpp ObjetosDeJuego/ObjetoDeJuego.cpp ObjetosDeJuego/ObjetoDeJuego.h ObjetosDeJuego/ID.h ObjetosDeJuego/ID.cpp
        GUI/Window.cpp GUI/Window.h GUI/gameWindow.cpp GUI/gameWindow.h ProcesamientoDeJuego/Juego.cpp ProcesamientoDeJuego/Juego.h
        ProcesamientoDeJuego/TextureManager.cpp ProcesamientoDeJuego/TextureManager.h
        ProcesamientoDeJuego/Board.cpp ProcesamientoDeJuego/Board.h
        ObjetosDeJuego/EntityComponentSystem.cpp ObjetosDeJuego/EntityComponentSystem.h
        ObjetosDeJuego/Components.h)

INCLUDE(FindPkgConfig)

PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
PKG_SEARCH_MODULE(SDL2IMAGE REQUIRED SDL2_image>=2.0.0)
find_package(Qt5 COMPONENTS Core Gui Widgets Multimedia REQUIRED)

INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIRS})
target_link_libraries(CE-vs-Zombies-Estudiantes Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Multimedia ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARIES})










