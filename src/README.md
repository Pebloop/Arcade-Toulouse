> [retour](https://github.com/TempoDev/Arcade-Toulouse)
# Sources
Liste et description des fichiers: 

## API

* **api.h** : API, en C, qui relie les *libs* et le *core*. Elle contient 3 fonctions, ces dernières devant être *définies dans chacunes des libs* et *appelées par le core* :
    * **void \*library_get_type()** : renvoie les métadatas de la lib.
    * **void \*library_create()** : renvoie la lib au core.
    * **void library_delete(void \*library)** : supprime la lib.

## Interfaces

* **IGame.hpp** : Interface qui définit les libraries de jeu
    * **void init(Scene &scene)** : lancé une fois au début du jeu.
    * **void update(Scene &scene, float dt)** : répété tout le long du jeu. La durée qui sépare 2 updates est définie dans *dt*.
    * **void end(Scene &scene)** : lancé une fois à la fin du jeu.

* **IGraphic.hpp** : Interface qui définit les libraries graphiques
    * **void init(Scene &scene)** : lancé une fois à l'activation de la lib graphique.
    * **void update(Scene &scene, float dt)** : répété tout le long du jeu. La durée qui sépare 2 updates est définie dans *dt*.
    * **void end(Scene &scene)** : lancé une fois à la fermetur de la lib graphique.

## Classes

* **Scene.hpp** : Classe qui définit une scène de jeu.