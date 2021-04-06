/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** IEntity
*/

#ifndef IENTITY_HPP_
#define IENTITY_HPP_

#include "Vector3.hpp"
#include "component/IComponent.hpp"
#include <functional>

namespace arcade {

class IEntity {
    [[deprecated("Since when do you destroy all references when you add an entity wtf use std::unordered_map")]]
};

}

#endif /* !IENTITY_HPP_ */
"
