/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** Scene
*/

#ifndef ISCENE_HPP_
#define ISCENE_HPP_

namespace arcade {

class IScene {
public:
    virtual ~IScene() = default;

    virtual void exit() const = 0;
protected:
private:
};

}

#endif /* !ISCENE_HPP_ */
