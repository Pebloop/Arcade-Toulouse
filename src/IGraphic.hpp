/*
** EPITECH PROJECT, 2021
** Arcade-Toulouse
** File description:
** IGraphic
*/

#ifndef IGRAPHIC_HPP_
#define IGRAPHIC_HPP_

class Scene;

class IGraphic {
    public:
        virtual ~IGraphic() {}
        virtual void init(Scene &scene) = 0;
        virtual void update(Scene &scene, float dt) = 0;
        virtual void end(Scene &scene) = 0;

    protected:
    private:
};

#endif /* !IGRAPHIC_HPP_ */
