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
#include <memory>

namespace arcade {

namespace component {

    struct AsciiSprite : public IComponent {
        std::shared_ptr<std::vector<char>> sprite;
        size_t width;
        size_t height;
    };

}

}

#endif /* !ASCIISPRITE_HPP_ */
