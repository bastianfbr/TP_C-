#pragma once

#ifndef PUISSANCE4_H
#define PUISSANCE4_H

#endif // PUISSANCE4_H

#include "Grille.h"

class Puissance4 : public Grille {

public:
	
	Puissance4();

	// Getters/Setters
	int getPion(int ligne, int colonne);
	int setPion(int colonne, int joueur);


	// Verification
	bool estPlace(int pion);
	bool estDansGrille(int ligne, int colonne);
	bool estRemplie();

	bool ligneComplete();
	bool colonneComplete();
	bool diagonaleComplete();
	bool estGagne();

	// Création et affichage de la grille
	void initGrille();
	void afficherGrille();

	void jouer();

	int demanderLigne();
	int demanderColonne();
	void demanderPion(int joueur);

private:
	
	int grille[4][7];
};