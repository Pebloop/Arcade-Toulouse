> [retour](https://github.com/TempoDev/Arcade-Toulouse)
# Sources
Liste et description des fichiers: 

## API

* **api.h** : API, en C, qui relie les *libs* et le *core*. Elle contient 3 fonctions, ces dernières devant être *définies dans chacunes des libs* et *appelées par le core* :
    * **void \*library_get_type()** : renvoie les métadatas de la lib.
    * **void \*library_create()** : renvoie la lib au core.
    * **void library_delete(void \*library)** : supprime la lib.

## Interfaces des librairies

* **ILibrary** : Interface qui définit les librairies
    * **void init(Scene &scene)** : lancé une fois lors de l'activation de la librairie.
    * **void update(Scene &scene, float dt)** : répété tout le long de son utilisation. La durée qui sépare 2 updates est définie dans *dt*.
    * **void end(Scene &scene)** : lancé une fois à la fin de l'utilisation de la librairie.

* **IGame.hpp** : Interface qui définit les libraries de jeu.

    * <details>
      <summary>Elle hérite des méthodes de **ILibrary** :</summary>

        * **void init(Scene &scene)** : lancé une fois au début du jeu.
        * **void update(Scene &scene, float dt)** : répété tout le long du jeu. La durée qui sépare 2 updates est définie dans *dt*.
        * **void end(Scene &scene)** : lancé une fois à la fin du jeu.

     </details>

    * Elle implémente également les méthodes suivantes :

        * **void onKeyDown(const Key &key)** : callback d'event de touche clavier préssé.
        * **void onKeyPressed(const Key &key)** : callback d'event de touche clavier appuyé.
        * **void onKeyReleased(const Key &key)** : callback d'event de touche clavier relaché.
        * **void onMouseDown(const MouseEvent &mouse)** : callback d'event de bouton de souris préssé.
        * **void onMousePressed(const MouseEvent &mouse)** : callback d'event de bouton de souris appuyé.
        * **void onMouseReleased(const MouseEvent &mouse)** : callback d'event de bouton de souris relàché.


* **IGraphic.hpp** : Interface qui définit les libraries graphiques.

    * <details>
      <summary>Elle hérite des méthodes de **ILibrary** :</summary>

         * **void init(Scene &scene)** : lancé une fois à l'activation de la lib graphique.
         * **void update(Scene &scene, float dt)** : répété tout le long du jeu. La durée qui sépare 2 updates est définie dans *dt*.
         * **void end(Scene &scene)** : lancé une fois à la fermetur de la lib graphique.
    </details>

## Interfaces autre

* **IScene.hpp** : interface qui définit une scène de jeu.

## Autre

* **keyboard.hpp** : énumération des touches du clavier.
* **Mouse.hpp** : structure qui contient un événement de souris.