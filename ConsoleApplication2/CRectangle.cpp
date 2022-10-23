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
	bool bool_p = this->comparerPerimetre(r);
	bool bool_s = this->comparerSurface(r);
	string txt_p = "";
	string txt_s = "";
	if (bool_p) { txt_p = "OUI"; }
	else { txt_p = "NON"; }
	if (bool_s) { txt_s = "OUI"; }
	else { txt_s = "NON"; }
	std::cout << "Le rectangle 1 a un plus grand perimetre que le rectangle 2 : " << txt_p << "\n"
		<< "Le rectangle 1 a une plus grande surface que le rectangle 2 : " << txt_s;
}