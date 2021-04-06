/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Scene
*/

#ifndef ISCENE_HPP_
#define ISCENE_HPP_

#include "IEntity.hpp"
#include "Vector2.hpp"
#include "event/IEvent.hpp"
#include <functional>
#include <string>
#include <vector>

namespace arcade {

/**
 * @brief A container for entities
 *
 * The `IScene` is also used to communicate events and exit requests.
 */
class IScene {
public:
        [[deprecated("Worst thing ever please rework with an instance system so it can beat least usable")]]
};

}

#endif /* !ISCENE_HPP_ */
