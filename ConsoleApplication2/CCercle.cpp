#include "CCercle.h"
#define M_PI 3.14159265358979323846

using namespace std;

/**
 * The constructor for the CCercle class
 * 
 * @param centre The centre of the circle.
 * @param diametre the diameter of the circle
 */
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

/**
 * The function returns true if the point is on the circle, false otherwise
 * 
 * @param p
 * 
 * @return A boolean value.
 */
bool CCercle::pointSurCercle(Point p) {
	bool comparaison = sqrt(pow(p.x - this->getCentre().x, 2) + pow(p.y - this->getCentre().y, 2)) == this->getDiametre() / static_cast<double>(2);
	return comparaison;
}

/**
 * The function returns true if the point is inside the circle, false otherwise
 * 
 * @param p
 * 
 * @return A boolean value.
 */
bool CCercle::pointDansCercle(Point p) {
	bool comparaison = sqrt(pow(p.x - this->getCentre().x, 2) + pow(p.y - this->getCentre().y, 2)) < this->getDiametre() / static_cast<double>(2);
	return comparaison;
}

/**
 * This function displays a message to the user indicating whether or not the point is on the circle
 * 
 * @param condition a boolean value that determines whether the point is on the circle or not
 */
void CCercle::afficherPointSurCercle(bool condition) {
	if (condition) {
		cout << "Le point est sur le cercle\n\n";
	}
	else {
		cout << "Le point n'est pas sur le cercle\n\n";
	}
}

/**
 * This function displays a message to the user indicating whether or not the point is inside the
 * circle
 * 
 * @param condition a boolean value that determines whether the point is in the circle or not
 */
void CCercle::afficherPointDansCercle(bool condition) {
	if (condition) {
		cout << "Le point est dans le cercle\n\n";
	}
	else {
		cout << "Le point n'est pas dans le cercle\n\n";
	}
}