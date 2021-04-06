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

    /**
     * @brief Add a component to this entity
     *
     * Calling this method invalidates all references to any component.
     *
     * @param component
     */
    virtual void addComponent(const component::IComponent& component) = 0;

    /**
     * @brief Remove a component from this entity
     *
     * Calling this method invalidates all references to any component.
     *
     * @param component
     */
    virtual void removeComponent(const component::IComponent& component) = 0;

    /**
     * @brief Run a predicate on each component attached to this entity
     *
     * @param fun
     */
    virtual void forEach(std::function<void(component::IComponent&)> fun) = 0;
};

}

#endif /* !IENTITY_HPP_ */
