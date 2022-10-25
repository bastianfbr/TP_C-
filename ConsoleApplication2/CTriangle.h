#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#endif // TRIANGLE_H
#include "point.h"

class CTriangle {
public:

	CTriangle(Point a, Point b, Point c);

	void setPointA(Point newPoint);
	void setPointB(Point newPoint);
	void setPointC(Point newPoint);
	void afficher();

	double calculerBase();
	double calculerHauteur();
	double calculerSurface();
	double calculerLongueur(Point pt1, Point pt2);
	
	bool estIsocele();
	bool estRectangle();
	bool estEquilateral();
	std::string typeTriangle();

private:

	Point a;
	Point b;
	Point c;
};