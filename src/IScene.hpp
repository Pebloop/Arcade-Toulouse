/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Scene
*/

#ifndef ISCENE_HPP_
#define ISCENE_HPP_

#include "IEntity.hpp"
#include "event/IEvent.hpp"
#include <functional>
#include <string>
#include <vector>

namespace arcade {

class IScene {
public:
    virtual ~IScene() = default;

    virtual void exit() const = 0;
    virtual void pushEvent(const event::IEvent& event) = 0;

    virtual IEntity& newEntity(std::string name) = 0;
    virtual IEntity& newEntity() = 0;
    virtual std::vector<std::reference_wrapper<IEntity>> getEntity(
        const std::string& name)
        = 0;
    virtual void removeEntity(const std::string& name) = 0;
    virtual void removeEntity(const IEntity& entity) = 0;

    virtual void addScore(float score) = 0;

    virtual void forEach(std::function<void(IEntity&)>) const = 0;

protected:
private:
};

}

#endif /* !ISCENE_HPP_ */
