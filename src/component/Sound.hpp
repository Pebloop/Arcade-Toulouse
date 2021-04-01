/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Sound
*/

#ifndef SOUND_HPP_
#define SOUND_HPP_

#include "IComponent.hpp"
#include <vector>
#include <cstdint>
#include <memory>

namespace arcade {

namespace component {

    struct Sound : public IComponent {
        using Channel = std::vector<std::int16_t>;

        std::shared_ptr<std::vector<Channel>> channels;
        std::uint32_t sampleRate;
        float currentTime;
        float volume;
        bool loop;
        bool play;
    };

}

}

#endif /* !SOUND_HPP_ */
