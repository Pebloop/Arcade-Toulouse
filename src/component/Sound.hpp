/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Sound
*/

#ifndef SOUND_HPP_
#define SOUND_HPP_

#include "IComponent.hpp"

namespace arcade {

namespace component {

    struct Sound : public IComponent {
        std::string path;

        ComponentType getType() const override
        {
            return ComponentType::SOUND;
        }
    };

}

}

#endif /* !SOUND_HPP_ */
