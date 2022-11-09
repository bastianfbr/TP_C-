#include "Jeu.h"
#include <iostream>
#include "Morpion.h"
#include "Puissance4.h"

Jeu::Jeu()
{
}

Jeu::~Jeu()
{
}

void Jeu::afficherDemandeJeu()
{
	std::cout << "Quel jeu voulez-vous jouer ?" << std::endl;

	std::cout << "1. Morpion" << std::endl;
	std::cout << "2. Puissance 4" << std::endl;
}

int Jeu::demanderJeu()
{
	int choix = 0;
	std::cin >> choix;

	return choix;
}

void Jeu::jouerJeu(int jeu)
{
	if (jeu == 1) {
		Morpion morpion;
		morpion.jouer();
	}
	else if (jeu == 2) {
		Puissance4 puissance4;
		puissance4.jouer();
	}
	else {
		std::cout << "Choix invalide" << std::endl;
	}
}

void Jeu::lancerPartie()
{
	afficherDemandeJeu();
	int choix = demanderJeu();
	jouerJeu(choix);
}