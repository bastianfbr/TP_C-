#include "CCercle.h"
#define M_PI 3.14159265358979323846

using namespace std;

CCercle::CCercle(const Point centre, const int diametre)
{
	this->centre = centre;
	this->diametre = diametre;
}

Point CCercle::getCentre() {
	return centre;
}

int CCercle::getDiametre() {
	return diametre;
}

void CCercle::setCentre(const Point centre) {
	this->centre = centre;
}

void CCercle::setDiametre(const int diametre) {
	this->diametre = diametre;
}

double CCercle::calculerPerimetre() {
	return M_PI * this->getDiametre();
}

double CCercle::calculerSurface() {
	return M_PI * pow(this->getDiametre() / 2, 2);
}

void CCercle::afficher() {
	cout << "Le cercle a pour centre " << this->getCentre().x << " " << this->getCentre().y << " et pour diametre " << this->getDiametre() << "\n" << "Son perimetre est de " << this->calculerPerimetre() << " et sa surface est de " << this->calculerSurface() << "\n\n";
}

bool CCercle::pointSurCercle(Point p) {
	bool comparaison = sqrt(pow(p.x - this->getCentre().x, 2) + pow(p.y - this->getCentre().y, 2)) == this->getDiametre() / static_cast<double>(2);
	return comparaison;
}

bool CCercle::pointDansCercle(Point p) {
	bool comparaison = sqrt(pow(p.x - this->getCentre().x, 2) + pow(p.y - this->getCentre().y, 2)) < this->getDiametre() / static_cast<double>(2);
	return comparaison;
}

void CCercle::afficherPointSurCercle(bool condition) {
	if (condition) {
		cout << "Le point est sur le cercle\n\n";
	}
	else {
		cout << "Le point n'est pas sur le cercle\n\n";
	}
}

void CCercle::afficherPointDansCercle(bool condition) {
	if (condition) {
		cout << "Le point est dans le cercle\n\n";
	}
	else {
		cout << "Le point n'est pas dans le cercle\n\n";
	}
}