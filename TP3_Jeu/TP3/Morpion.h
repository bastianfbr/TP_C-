#pragma once

#ifndef MORPION_H
#define MORPION_H

#endif // MORPION_H

#include "Grille.h"

class Morpion : public Grille {
	
public:

	Morpion();

	// Getters/Setters
	int getPion(int ligne, int colonne);
	int setPion(int ligne, int colonne, int joueur);

	
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
	
	int grille[3][3];
};