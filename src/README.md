# Arcade Toulouse

Details about most interfaces can be found on their appropriate page. This page
serves as a guide for proper usage and understanding of the API.

## Invalid references

Some methods, such as `IScene::newEntity`, `IScene::removeEntity`,
`IEntity::addComponent` or `IEntity::removeComponent` cause some references to
be "invalidated". Using a invalid reference leads to undefined behaviour. Here's
a short explanation of what that implies.

Suppose you are creating some entities and storing references to them:

```cpp
IEntity& player = scene.newEntity();
IEntity& enemy = scene.newEntity();
```

Because `IScene::newEntity` invalidates all other entity references, when the
`enemy` entity is created, the reference to `player` is invalidated.

That means the following code is invalid:

```cpp
IEntity& player = scene.newEntity();
IEntity& enemy = scene.newEntity();

Transform xform;
player.addComponent(xform); /* UNDEFINED BEHAVIOUR! */
```

Instead do something like the following example:

```cpp
IEntity& player = scene.newEntity();

Transform xform;
player.addComponent(xform); /* OK! */

IEntity& enemy = scene.newEntity();

// here, "player" is invalid
```

The same applies to component references when attaching them to entities.

### Why though?

The reason for this is rather simple: entities (and components) are likely to be
stored in a continuous memory buffer that gets re-allocated or moved when
mutating it.

In other terms, if you have an `std::vector` like this:

```cpp
std::vector<Entity> entities;
```

And get a reference to an element:

```cpp
Entity& my_entity = entities[0];
```

Inserting a new element in the vector will invalidate the reference to
`my_entity`, because the `std::vector` might need to re-allocate and move the
values elsewhere in memory:

```cpp
std::vector<Entity> entities;

entities.push_back(Entity("player"));
Entity& player = entities[0];

entities.push_back(Entity("enemy"));
Entity& enemy = entities[1];

// if the vector re-allocated memory, "player" now refers to an invalid location
// there's no way to know if that was the case, so the reference is in an
// invalid state and using it leads to undefined behaviour.
```
