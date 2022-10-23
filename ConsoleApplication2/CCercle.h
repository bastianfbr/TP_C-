#pragma once 
#ifndef CERCLE_H
#define CERCLE_H

#endif // CERCLE_H

#include <iostream>
#include <cmath>
#include "point.h"

class CCercle {
public:

	CCercle(const Point centre, const int diametre);

	Point getCentre();
	int getDiametre();

	void setCentre(const Point centre);
	void setDiametre(const int diametre);

	double calculerPerimetre();
	double calculerSurface();

	bool pointSurCercle(const Point p);
	bool pointDansCercle(const Point p);
	void afficher();
private:
	Point centre;
	int diametre;
};