#include "Personnage.hpp"

#include <string>

using namespace std;

Personnage::Personnage()
{
	m_vie = 100;
	m_mana = 100;
	m_nomArme = "Epee rouillee";
	m_degatsArme = 10;
}

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100),
m_mana(100), m_nomArme(nomArme),m_degatsArme(degatsArme)
{
}

void Personnage::recevoirDegats(int nbDegats)
{
	m_vie -= nbDegats;
	if (m_vie < 0)
		m_vie = 0;
}

void Personnage::attaquer(Personnage &cible)
{
	cible.recevoirDegats(m_degatsArme);
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
	m_vie += quantitePotion;
	if (m_vie > 100)
		m_vie = 100;
}

void Personnage::changerArme(string newArme, int degatsNewArme)
{
	m_nomArme = newArme;
	m_degatsArme = degatsNewArme;
}

bool Personnage::estVivant()
{
	return (m_vie > 0);
}