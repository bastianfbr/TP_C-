#include "Morpion.h";

// Path: TP3\Morpion.h

#include <iostream>
#include <windows.h>

Morpion::Morpion() {
	initGrille();
}

int Morpion::getPion(int ligne, int colonne) {
	return grille[ligne][colonne];
}

/**
 * It sets the value of the cell at the given coordinates to the given player's number.
 * 
 * @param ligne the line where the player wants to put his pawn
 * @param colonne the column number of the grid
 * @param joueur 1 or 2
 */

int Morpion::setPion(int ligne, int colonne, int joueur) {
/* Checking if the player is 1 or 2 and then it is checking if the place is already taken. */
	int pion = 0;
	if (joueur == 1) { pion = 10; }
	else if (joueur == 2) { pion = 20; };
	
	if (!estPlace(grille[ligne-1][colonne-1])) {
		if (estDansGrille(ligne, colonne)) {
			grille[ligne-1][colonne-1] = pion;
			return 1; // Pion plac�
		}
		else {
			std::cout << "La place du pion n'existe pas" << std::endl;
			return 0; // Pion non plac�
		}
	}
	else {
		std::cout << "La place du pion est d�j� occup�e" << std::endl;
		return 0; // Pion non plac�
	}
}

bool Morpion::estPlace(int pion) {
	return (pion == 10) || (pion == 20);
}

bool Morpion::estDansGrille(int ligne, int colonne) {
	return ligne >= 0 && ligne <= 3 && colonne >= 0 && colonne <= 3;
}

bool Morpion::estRemplie() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (!estPlace(grille[i][j])) {
				return false;
			}
		}
	}
	return true;
}

bool Morpion::ligneComplete() {
	for (int i = 0; i < 3; i++) {
		if (grille[i][0] == grille[i][1] && grille[i][1] == grille[i][2]) {
			return true;
		}
	}
	return false;
}

bool Morpion::colonneComplete() {
	for (int i = 0; i < 3; i++) {
		if (grille[0][i] == grille[1][i] && grille[1][i] == grille[2][i]) {
			return true;
		}
	}
	return false;
}

bool Morpion::diagonaleComplete() {
	return (grille[0][0] == grille[1][1] && grille[1][1] == grille[2][2]) || (grille[0][2] == grille[1][1] && grille[1][1] == grille[2][0]);
}

void Morpion::initGrille() {
	int numb = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			grille[i][j] = numb;
			numb++;
		}
	}
}

void Morpion::afficherGrille() {
	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (grille[i][j] == 10) {
			SetConsoleTextAttribute(console, 12);
			std::cout << " | " << "X" << " | ";
			SetConsoleTextAttribute(console, 15);
			}
			else if (grille[i][j] == 20) {
			SetConsoleTextAttribute(console, 2);
			std::cout << " | " << "O" << " | ";
			SetConsoleTextAttribute(console, 15);
			}
			else {
				std::cout << " | " << grille[i][j] << " | ";
			}
		}
		std::cout << std::endl;
	}
}

bool Morpion::estGagne() {
	return ligneComplete() || colonneComplete() || diagonaleComplete();
}

void Morpion::jouer() {
/* The main function of the game. It is the loop that is going to be executed until the game is won. */
	int joueur  = 1;
	std::string pion = "X";
	while (!estGagne()) {
		system("CLS");
		std::cout << "C'est au joueur " << joueur << " de jouer \n" << std::endl;
		std::cout << "Place ton pion " << pion << " sur la grille" << std::endl;
		afficherGrille();
		demanderPion(joueur);
		if (joueur == 1) {
			joueur = 2;
			pion = "O";
		}
		else {
			joueur = 1;
			pion = "X";
		}
		if (estRemplie()) {
			std::cout << "Match nul" << std::endl;
			break;
		}
	}
	if (joueur == 1) {
		joueur = 2;
	}
	else {
		joueur = 1;
	}
		std::cout << "Le joueur " << joueur << " a gagn�" << std::endl;
}

int Morpion::demanderLigne() {
	int ligne;
	std::cout << "Entrez la ligne du pion : ";
	std::cin >> ligne;
	return ligne;
}

int Morpion::demanderColonne() {
	int colonne;
	std::cout << "Entrez la colonne du pion : ";
	std::cin >> colonne;
	return colonne;
}

void Morpion::demanderPion(int joueur) {
	int ligne = demanderLigne();
	int colonne = demanderColonne();
	setPion(ligne, colonne, joueur);
}