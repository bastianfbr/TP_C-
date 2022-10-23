#include <iostream>
#include "CRectangle.h"
#include "CCercle.h";
using namespace std;

int main()
{
	CRectangle rectangle = CRectangle(10, 5);
	rectangle.afficher();
	CRectangle rectangle2 = CRectangle(5, 8);
	rectangle2.afficher();
	rectangle.afficherComparaison(rectangle2);

	Point point = Point(5, 5);
	CCercle cercle = CCercle(Point(0, 0), 10);
	cercle.afficher();
	CCercle cercle2 = CCercle(Point(0, 0), 5);
	cercle2.afficher();
}
