#pragma once

#define PI_MACRO 3.14159
#define AREA_MACRO(radius) (PI_MACRO * (radius) * (radius))

class Circle {
public:
    Circle(double r) : radius(r) {}

    inline double area_inline() const {
        return 3.14159 * radius * radius;
    }

private:
    double radius;
};
