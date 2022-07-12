#ifndef PERSONNAGE_HPP
# define PERSONNAGE_HPP

#include <string>

class Personnage
{
	public:
	Personnage();
	Personnage(std::string nomArme, int degatsArme);
	void recevoirDegats(int nbDegats);
	void attaquer(Personnage &cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string newArme, int degatsNewArme);
	bool estVivant();

	private:
	int m_vie;
	int m_mana;
	std::string m_nomArme;
	int m_degatsArme;
};

#endif
