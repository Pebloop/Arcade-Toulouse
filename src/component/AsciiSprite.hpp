/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** AsciiSprite
*/

#ifndef ASCIISPRITE_HPP_
#define ASCIISPRITE_HPP_

#include "IComponent.hpp"

namespace arcade {

namespace component {

    struct AsciiSprite : public IComponent {
        ComponentType getType() const override
        {
            return ComponentType::ASCII_SPRITE;
        }
    };

}

}

#endif /* !ASCIISPRITE_HPP_ */
