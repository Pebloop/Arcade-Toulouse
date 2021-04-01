/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** AsciiSprite
*/

#ifndef ASCIISPRITE_HPP_
#define ASCIISPRITE_HPP_

#include "IComponent.hpp"
#include <vector>

namespace arcade {

namespace component {

struct AsciiSprite : public IComponent {
    std::vector<char> sprite;
    size_t width;
    size_t heigth;

    ComponentType getType() const override
        {return ComponentType::ASCII_SPRITE;}
};

}

}

#endif /* !ASCIISPRITE_HPP_ */
