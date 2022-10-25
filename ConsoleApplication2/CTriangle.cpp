#include <iostream>
#include <algorithm>
#include "CTriangle.h"
#include <string>

CTriangle::CTriangle(Point a, Point b, Point c) {

	this->a = a;
	this->b = b;
	this->c = c;
}

void CTriangle::setPointA(Point newPoint) {
	this->a = a;
}

void CTriangle::setPointB(Point newPoint) {
	this->b = b;
}

void CTriangle::setPointC(Point newPoint) {
	this->c = c;
}

void CTriangle::afficher() {
	std::cout << "Triangle: " << std::endl;
	std::cout << "Point A: " << a.x << ", " << a.y << std::endl;
	std::cout << "Point B: " << b.x << ", " << b.y << std::endl;
	std::cout << "Point C: " << c.x << ", " << c.y << std::endl;
	std::cout << "Base : " << calculerBase() << std::endl;
	std::cout << "Hauteur : " << calculerHauteur() << std::endl;
	std::cout << "Surface : " << calculerSurface() << std::endl;
	std::cout << "Longueur AB : " << calculerLongueur(a, b) << std::endl;
	std::cout << "Longueur BC : " << calculerLongueur(b, c) << std::endl;
	std::cout << "Longueur AC : " << calculerLongueur(a, c) << std::endl;
	std::cout << "Type : " << typeTriangle() << std::endl;
	
}

double CTriangle::calculerLongueur(Point pt1, Point pt2) {
	double longueur = sqrt(pow(pt2.x - pt1.x, 2) + pow(pt2.y - pt1.y, 2));
	return longueur;
}

double CTriangle::calculerBase() {
	double lg1 = calculerLongueur(a, b);
	double lg2 = calculerLongueur(b, c);
	double lg3 = calculerLongueur(c, a);
	double max = std::max(lg1, lg3);
	max = std::max(max, lg2);
	return max;
}

double CTriangle::calculerHauteur() {
	double base = calculerBase();
	double lg1 = calculerLongueur(a, b);
	double lg2 = calculerLongueur(b, c);
	double lg3 = calculerLongueur(c, a);
	double hauteur = 0;
	if (base == lg1) {
		hauteur = sqrt(pow(lg2, 2) - pow(base / 2, 2));
	}
	else if (base == lg2) {
		hauteur = sqrt(pow(lg3, 2) - pow(base / 2, 2));
	}
	else if (base == lg3) {
		hauteur = sqrt(pow(lg1, 2) - pow(base / 2, 2));
	}
	return hauteur;
}

double CTriangle::calculerSurface() {
	double base = calculerBase();
	double hauteur = calculerHauteur();
	return base * hauteur / 2;
}

bool CTriangle::estIsocele() {
	double lg1 = calculerLongueur(a, b);
	double lg2 = calculerLongueur(b, c);
	double lg3 = calculerLongueur(c, a);
	if (lg1 == lg2 || lg2 == lg3 || lg3 == lg1) {
		return true;
	}
	else {
		return false;
	}
}

bool CTriangle::estRectangle() {
	double lg1 = calculerLongueur(a, b);
	double lg2 = calculerLongueur(b, c);
	double lg3 = calculerLongueur(c, a);
	if (lg1 == sqrt(pow(lg2, 2) + pow(lg3, 2)) || lg2 == sqrt(pow(lg1, 2) + pow(lg3, 2)) || lg3 == sqrt(pow(lg1, 2) + pow(lg2, 2))) {
		return true;
	}
	else {
		return false;
	}
}

bool CTriangle::estEquilateral() {
	double lg1 = calculerLongueur(a, b);
	double lg2 = calculerLongueur(b, c);
	double lg3 = calculerLongueur(c, a);
	if (lg1 == lg2 && lg2 == lg3) {
		return true;
	}
	else {
		return false;
	}
}

std::string CTriangle::typeTriangle() {
	if (estEquilateral()) {
		return "Equilateral";
	}
	else if (estIsocele()) {
		return "Isocele";
	}
	else if (estRectangle()) {
		return "Rectangle";
	}
	else {
		return "Triangle quelconque";
	}
}