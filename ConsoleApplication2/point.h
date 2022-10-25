#pragma once 
#ifndef POINT_H
#define POINT_H

#endif // POINT_H

struct Point {
    float x;
    float y;
    Point() {
		x = 0;
		y = 0;
    }
    Point(float a, float b) {
        x = a;
        y = b;
    }
};
