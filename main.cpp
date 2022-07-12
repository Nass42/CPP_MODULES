
#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;


int main(void)
{
	Personnage david, goliath("Epee aiguisee", 20);
	//Création de 2 objets de type Personnage : david et goliath
 
	goliath.attaquer(david);    //goliath attaque david
	david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
	goliath.attaquer(david);    //goliath attaque david
	david.attaquer(goliath);    //david contre-attaque... c'est assez clair non ?
    
	goliath.changerArme("Double hache de la mort", 40);
	goliath.attaquer(david);
	return (0);
}