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
    virtual ~IScene() = default;

    /**
     * @brief Unload all resources and cleanly terminate the process
     */
    virtual void exit() const = 0;

    /**
     * @brief Push an event
     *
     * The currently loaded `IGame` instance will have their corresponding
     * callback called. Whether the call is synchronous or not is undefined.
     *
     * @param event The event instance
     */
    virtual void pushEvent(const event::IEvent& event) = 0;

    /**
     * @brief Create a new named entity
     *
     * Calling this method invalidates all references entities of this scene.
     *
     * @param name The name of the new entity
     * @return IEntity&
     */
    virtual IEntity& newEntity(std::string name) = 0;

    /**
     * @brief Create a new unnamed entity
     *
     * Calling this method invalidates all references entities of this scene.
     *
     * @return IEntity&
     */
    virtual IEntity& newEntity() = 0;

    /**
     * @brief Get all entities with the given name
     *
     * @param name The name of the entities to be retrieved
     * @return std::vector<std::reference_wrapper<IEntity>>
     */
    virtual std::vector<std::reference_wrapper<IEntity>> getEntity(
        const std::string& name)
        = 0;

    /**
     * @brief Remove all entities with the given name
     *
     * Calling this method invalidates all references entities of this scene.
     *
     * @param name The name of the entities to removed
     */
    virtual void removeEntity(const std::string& name) = 0;

    /**
     * @brief Remove a single entity from the scene
     *
     * Calling this method invalidates all references entities of this scene.
     *
     * @param entity A reference to the entity to remove
     */
    virtual void removeEntity(const IEntity& entity) = 0;

    /**
     * @brief Add a score to the scoreboard of the currently running game
     *
     * @param score
     */
    virtual void addScore(float score) = 0;

    /**
     * @brief Iterate over all entities of this scene
     *
     * No entities should be added or removed in the callback function, as this
     * could invalidate any internal iterator or entity reference.
     */
    virtual void forEach(std::function<void(IEntity&)>) = 0;

    /**
     * @brief Iterate over all entities of this scene named name
     *
     * No entities should be added or removed in the callback function, as this
     * could invalidate any internal iterator or entity reference.
     */
    virtual void forEach(std::function<void(IEntity&)>, const std::string& name)
        = 0;

    /**
     * @brief Set the preferred window size (in game units)
     *
     * @param x
     * @param y
     */
    virtual void setWindowSize(int x, int y) = 0;

    /**
     * @brief Get the preferred window size (in game units)
     *
     * @return math::Vector2
     */
    virtual math::Vector2 getWindowSize() const = 0;
};

}

#endif /* !ISCENE_HPP_ */
