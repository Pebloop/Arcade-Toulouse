/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Scene
*/

#ifndef ISCENE_HPP_
#define ISCENE_HPP_

#include "IEntity.hpp"
#include "IEvent.hpp"
#include <string>

namespace arcade {

class IScene {
public:
    virtual ~IScene() = default;

    virtual void exit() const = 0;
    virtual void pushEvent(IEvent& event) = 0;

    virtual IEntity& newEntity(std::string name) = 0;
    virtual void addEntity(IEntity entity) = 0;
    virtual IEntity& getEntity(std::string name) = 0;
    virtual IEntity& getEntity(size_t index) = 0;
    virtual void removeEntity(std::string name) = 0;

    virtual void addScore(float score) = 0;

    virtual void forEach(std::function<void(IEntity &)>) const = 0;

protected:
private:
};

}

#endif /* !ISCENE_HPP_ */
