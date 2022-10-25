#include <iostream>
#include "CRectangle.h"
#include "CCercle.h"
#include "CTriangle.h"
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
	cercle.afficherPointDansCercle(cercle.pointDansCercle(point));
	cercle.afficherPointSurCercle(cercle.pointDansCercle(point));
	cercle2.afficherPointDansCercle(cercle2.pointDansCercle(point));
	cercle2.afficherPointSurCercle(cercle2.pointDansCercle(point));

	CTriangle triangle = CTriangle(Point(0, 0), Point(0, 5), Point(5, 0));
	triangle.afficher();
}
