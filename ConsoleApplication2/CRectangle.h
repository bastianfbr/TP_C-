#pragma once 
#ifndef RECTANGLE_H
#define RECTANGLE_H

#endif // RECTANGLE_H

#include "point.h"

class CRectangle {
public:

	CRectangle(int longueur, int largeur);

	int getLongueur();
	int getLargeur();
	Point getPoint();

	void setLongueur(const int newLongueur);
	void setLargueur(const int newLargeur);
	void setPoint(const Point newPoint);

	int calculerPerimetre();
	int calculerSurface();

	void afficher();
	bool comparerPerimetre(const CRectangle r);
	bool comparerSurface(const CRectangle r);
	void afficherComparaison(CRectangle r);
private:

	int largeur;
	int longueur;
	Point coinSuperieurGauche;
};
