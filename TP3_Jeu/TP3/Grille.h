#pragma once
#include "Joueur.h"

#ifndef GRILLE_H
#define GRILLE_H

#endif // GRILLE_H

class Grille {

public:
	
	Grille();
	
	// Getters/Setters
	virtual int getPion(int ligne, int colonne) = 0;
	int setPion(int ligne, int colonne, int joueur);
	
	// Verification
	virtual bool estPlace(int pion) = 0;
	virtual bool estDansGrille(int ligne, int colonne) = 0;
	
	virtual bool ligneComplete() = 0;
	virtual bool colonneComplete() = 0;
	virtual bool diagonaleComplete() = 0;
	virtual bool estGagne() = 0;
	
	// Création et affichage de la grille
	virtual void initGrille() = 0;
	virtual void afficherGrille() = 0;
	
	// Partie
	
	virtual void jouer() = 0;
	
	virtual int demanderLigne() = 0;
	virtual int demanderColonne() = 0;
	virtual void demanderPion(int joueur) = 0;

private:
};