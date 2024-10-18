#include <iostream>
#include "Circle.h"

int main() {
    double radius = 5.0;

    // Using Macro
    double area_macro = AREA_MACRO(radius);
    std::cout << "Area using Macro: " << area_macro << std::endl;

    // Using Inline Function
    Circle circle(radius);
    double area_inline = circle.area_inline();
    std::cout << "Area using Inline Function: " << area_inline << std::endl;

    return 0;
}
