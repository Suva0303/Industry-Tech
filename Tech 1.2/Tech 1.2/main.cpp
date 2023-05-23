#include "circle.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");
    double radius, x_center, y_center;
    std::cout << "Введите радиус, координату x центра и координату y центра для окружности 1: ";
    std::cin >> radius >> x_center >> y_center;
    Circle circle1(radius, x_center, y_center);

    std::cout << "Площадь окружности 1: " << circle1.getArea() << std::endl;

    double a, b, c;
    std::cout << "Введите стороны треугольника для проверки, вписана ли окружность 1 и описывает ли ее: ";
    std::cin >> a >> b >> c;
    std::cout << "Окружность 1 вписана в треугольник? " << std::boolalpha << circle1.isInscribed(a, b, c) << std::endl;
    std::cout << "Окружность 1 описывает треугольник? " << std::boolalpha << circle1.isCircumscribed(a, b, c) << std::endl;

    double r, x_cntr, y_cntr;
    std::cout << "Введите радиус, координату x центра и координату y центра для окружности 2: ";
    std::cin >> r >> x_cntr >> y_cntr;
    Circle circle2(r, x_cntr, y_cntr);

    std::cout << "Пересекаются ли окружности 1 и 2? " << std::boolalpha << circle1.isIntersected(a, b, c) << std::endl;

    return 0;
}