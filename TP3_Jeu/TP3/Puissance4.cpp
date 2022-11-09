#include "Puissance4.h"

#include <iostream>
#include <windows.h>

Puissance4::Puissance4()
{
	initGrille();
}

int Puissance4::getPion(int ligne, int colonne)
{
	return grille[ligne][colonne];
}

int Puissance4::setPion(int colonne, int joueur)
{
	for (int i = 5; i >= 0; i--) {
		if (grille[i][colonne-1] == 0) {
			grille[i][colonne-1] = joueur;
			break;
		}
	}
	return 1;
}

bool Puissance4::estPlace(int pion)
{
	return (pion == 10) || (pion == 20);
}

bool Puissance4::estDansGrille(int ligne, int colonne)
{
	return ligne >= 0 && ligne <= 6 && colonne >= 0 && colonne <= 5;
}

bool Puissance4::estRemplie() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 7; j++) {
			if (!estPlace(grille[i][j])) {
				return false;
			}
		}
	}
	return true;
}

bool Puissance4::ligneComplete()
{
	// Todo
	return false;
}

bool Puissance4::colonneComplete()
{
	// Todo
	return false;
}

bool Puissance4::diagonaleComplete()
{
	// Todo
	return false;
}

void Puissance4::initGrille()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 7; j++) {
			grille[i][j] = 0;
		}
	}
}

void Puissance4::afficherGrille()
{
	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 7; j++) {
			if (grille[i][j] == 1) {
				SetConsoleTextAttribute(console, 12);
				std::cout << "X";
				SetConsoleTextAttribute(console, 15);
			}
			else if (grille[i][j] == 2) {
				SetConsoleTextAttribute(console, 2);
				std::cout << "O";
				SetConsoleTextAttribute(console, 15);
			}
			else {
				std::cout << grille[i][j];
			}
		}
		std::cout << std::endl;
	}
}

void Puissance4::jouer()
{
	int joueur = 1;
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
}

int Puissance4::demanderLigne()
{
	int ligne = 0;
	std::cout << "Entrez la ligne: ";
	std::cin >> ligne;
	return ligne;
}

int Puissance4::demanderColonne()
{
	int colonne = 0;
	std::cout << "Entrez la colonne: ";
	std::cin >> colonne;
	return colonne;
}

void Puissance4::demanderPion(int joueur)
{
	int colonne = demanderColonne();
	setPion(colonne, joueur);
}

bool Puissance4::estGagne()
{
	return ligneComplete() || colonneComplete() || diagonaleComplete();
}