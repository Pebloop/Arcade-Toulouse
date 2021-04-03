/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Sprite
*/

#ifndef SPRITE_HPP_
#define SPRITE_HPP_

#include "IComponent.hpp"
#include <memory>
#include <vector>

namespace arcade {
struct Color {
    unsigned char a;
    unsigned char r;
    unsigned char g;
    unsigned char b;
};

namespace component {

    struct Sprite : public IComponent {
        std::shared_ptr<std::vector<Color>> pixels;
        size_t width;
        size_t height;
    };

}

}

#endif /* !SPRITE_HPP_ */
