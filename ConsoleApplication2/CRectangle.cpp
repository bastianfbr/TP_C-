#include <iostream>

#include "CRectangle.h"
using namespace std;

CRectangle::CRectangle(const int longueur, const int largeur) {
	this->longueur = longueur;
	this->largeur = largeur;

}

int CRectangle::getLongueur() {
	return longueur;
}

int CRectangle::getLargeur() {
	return largeur;
}

Point CRectangle::getPoint() {
	return coinSuperieurGauche;
}

void CRectangle::setLongueur(const int newLongueur) {
	longueur = newLongueur;
}

void CRectangle::setLargueur(const int newLargeur) {
	largeur = newLargeur;
}

void CRectangle::setPoint(const Point newPoint) {
	coinSuperieurGauche = newPoint;
}

int CRectangle::calculerPerimetre() {
	return this->getLongueur() * 2 + this->getLargeur() * 2;
}

int CRectangle::calculerSurface() {
	return this->getLongueur() * this->getLargeur();
}

void CRectangle::afficher() {
	std::cout << "Le rectangle a " << this->getLongueur() << " longueur et "
		<< this->getLargeur() << " de largeur\n" << "Son perimetre est de "
		<< this->calculerPerimetre() << " et sa surface est de " << this->calculerSurface() << "\n\n";
}

/* BONUS RECTANGLE */
bool CRectangle::comparerPerimetre(CRectangle r) {
	bool comparaison = this->calculerPerimetre() > r.calculerPerimetre();
	return comparaison;
}

bool CRectangle::comparerSurface(CRectangle r) {
	bool comparaison = this->calculerSurface() > r.calculerSurface();
	return comparaison;
}

void CRectangle::afficherComparaison(CRectangle r) {
	if (this->comparerPerimetre(r)) {
		std::cout << "Le perimetre du rectangle est plus grand que celui du rectangle 2\n";
	}
	else {
		std::cout << "Le perimetre du rectangle est plus petit que celui du rectangle 2\n";
	}

	if (this->comparerSurface(r)) {
		std::cout << "La surface du rectangle est plus grande que celle du rectangle 2\n";
	}
	else {
		std::cout << "La surface du rectangle est plus petite que celle du rectangle 2\n";
	}
}