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
public:
    virtual ~IEntity() = default;

    // add component to entity
    virtual void addComponent(const component::IComponent& component) = 0;
    // remove component from entity
    virtual void removeComponent(const component::IComponent& component) = 0;

    // for each components from entity, execute fun
    virtual void forEach(std::function<void(component::IComponent&)> fun) = 0;

protected:
private:
};

}

#endif /* !IENTITY_HPP_ */
