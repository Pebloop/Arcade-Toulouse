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
    virtual ~IEntity() {};

    // get entity position
    virtual Vector3 getPosition() const = 0;
    // set entity position
    virtual void setPosition(Vector3 pos) = 0;

    // add component to entity
    virtual void addComponent(component::IComponent* component) = 0;
    // remove component from entity
    virtual void removeComponent(size_t index) = 0;
    virtual void removeComponent(component::ComponentType type) = 0;
    // get component from entity
    virtual component::IComponent* getComponent(size_t index) = 0;
    virtual component::IComponent* getComponent(component::ComponentType type)
        = 0;

    // for each components from entity, execute fun
    virtual void forEach(
        std::function<void(component::IComponent&)> fun) const = 0;

protected:
private:
};

}

#endif /* !IENTITY_HPP_ */
