
/**

    @file Gfx.hpp
    @brief Brew.js API - NDS modules - Gfx (NTR specific)
    @author XorTroll
    @copyright Brew.js project

*/

#pragma once
#include "../../API.hpp"

namespace Brew
{
    namespace BuiltIn
    {
        namespace Gfx
        {
            /**
                @brief API JS Function: "gfx.init()"
                @note Initializes framebuffer gfx API. This description is for using the function with JavaScript.
            */
            API::Function init(API::NativeContext Context);

            /**
                @brief API JS Function: "gfx.drawPixel(Screen, X, Y, R, G, B)"
                @note Draws a pixel with given arguments. This description is for using the function with JavaScript.
            */
            API::Function drawPixel(API::NativeContext Context);

            /**
                @brief API JS Function: "gfx.drawRectangle(Screen, X, Y, Width, Height, R, G, B)"
                @note Draws a rectangle with given arguments. This description is for using the function with JavaScript.
            */
            API::Function drawRectangle(API::NativeContext Context);
            
            /**
                @brief API JS Function: "gfx.drawScreen(Screen, R, G, B)"
                @note Draws the entire screen with given arguments. This description is for using the function with JavaScript.
            */
            API::Function drawScreen(API::NativeContext Context);

            /**
                @brief API JS Function: "gfx.drawImage(Screen, Path, X, Y)"
                @note Draws an image (BMP, PNG or JPG). This description is for using the function with JavaScript.
            */
            API::Function drawImage(API::NativeContext Context);
            
            /**
                @brief API JS Function: "gfx.refresh()"
                @note Flushes framebuffer gfx. This description is for using the function with JavaScript.
            */
            API::Function refresh(API::NativeContext Context);

            /**
                @brief Gets the Brew.js module of gfx.
                @return The module.
            */
            API::Module initModule();
        }
    }
}