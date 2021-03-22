> [retour](https://github.com/TempoDev/Arcade-Toulouse)
# Documentation
Le principe de l'arcade commun est de faire un pseudo ECS (Entity-Component-System) en récupérant les données d'une lib graphique et d'une lib de jeu et des les associer pour faire un jeu.
## Architecture
L'architecture choisie de l'arcade est la suivante :
![core](core.png)

* Le **Core** est le centre de l'arcade, elle est la partie opaque et non commune du projet.
* L'interface **IGame** représente les libs de jeu
* L'interface **IGraphic** représente les libs graphiques
* La classe **Scene** contient la scene  avec lequels interagissent le jeu et la lib graphiques.