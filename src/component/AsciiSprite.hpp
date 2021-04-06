/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** AsciiSprite
*/

#ifndef ASCIISPRITE_HPP_
#define ASCIISPRITE_HPP_

#include "IComponent.hpp"
#include <memory>
#include <vector>

namespace arcade {

namespace component {

    /**
     * @brief Component representing a sprite made out of ASCII characters
     */
    struct AsciiSprite : public IComponent {
        std::shared_ptr<std::vector<char>> sprite;
        size_t width;
        size_t height;
    };

}

}

#endif /* !ASCIISPRITE_HPP_ */
