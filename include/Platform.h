//
// Created by Adams Humbert on 2/21/2025.
//

#ifndef PLATFORMLAYER_H
#define PLATFORMLAYER_H

#include <cstdint>
#include <glad/gl.h>
#include <SDL.h>



class Platform
{
    //friend class Imgui;

public:
    Platform(char const* title, int windowWidth, int windowHeight, int textureWidth, int textureHeight);
    ~Platform();
    void Update(void const* buffer, int pitch);
    bool ProcessInput(uint8_t* keys);



private:

    SDL_Window* window{};
    SDL_GLContext gl_context{};
    GLuint framebuffer_texture;
    SDL_Renderer* renderer{};
    SDL_Texture* texture{};
};





#endif //PLATFORMLAYER_H
