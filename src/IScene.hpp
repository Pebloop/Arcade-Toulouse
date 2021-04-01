/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Scene
*/

#ifndef ISCENE_HPP_
#define ISCENE_HPP_

#include "IEvent.hpp"

namespace arcade {

class IScene {
public:
    virtual ~IScene() = default;

    virtual void exit() const = 0;
    virtual void pushEvent(IEvent& event) = 0;

protected:
private:
};

}

#endif /* !ISCENE_HPP_ */
