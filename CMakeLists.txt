cmake_minimum_required(VERSION 3.29)

project(Chip8)


set(CMAKE_CXX_STANDARD 20)
#set(PROJECT_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})


# for setting up the include and the lib directories, like it would be in visual studio
set(SDL2_INCLUDE_DIR "C:/Users/Adams Humbert/Desktop/Libraries_C++/SDL2-2.0.20/include")
set(SDL2_Lib_DIR "C:/Users/Adams Humbert/Desktop/Libraries_C++/SDL2-2.0.20/lib/x64")
include_directories(${SDL2_INCLUDE_DIR})
link_directories(${SDL2_Lib_DIR})


set(GLAD_INCLUDE_DIR "C:/Users/Adams Humbert/Desktop/Libraries_C++/glad2/include")
include_directories(${GLAD_INCLUDE_DIR})

#Include library files
include_directories(glad2/include)


add_executable(Chip8 main.cpp
        src/Chip8E.cpp
        include/Chip8.h
        src/Platform.cpp
        include/Platform.h
        glad2/src/gl.c
)




# this must come after executable to work properly
target_include_directories(Chip8 PUBLIC include)



target_link_libraries(${PROJECT_NAME} SDL2main SDL2)
