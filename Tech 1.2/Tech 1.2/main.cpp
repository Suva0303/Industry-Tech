#include "circle.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");
    double radius, x_center, y_center;
    std::cout << "������� ������, ���������� x ������ � ���������� y ������ ��� ���������� 1: ";
    std::cin >> radius >> x_center >> y_center;
    Circle circle1(radius, x_center, y_center);

    std::cout << "������� ���������� 1: " << circle1.getArea() << std::endl;

    double a, b, c;
    std::cout << "������� ������� ������������ ��� ��������, ������� �� ���������� 1 � ��������� �� ��: ";
    std::cin >> a >> b >> c;
    std::cout << "���������� 1 ������� � �����������? " << std::boolalpha << circle1.isInscribed(a, b, c) << std::endl;
    std::cout << "���������� 1 ��������� �����������? " << std::boolalpha << circle1.isCircumscribed(a, b, c) << std::endl;

    double r, x_cntr, y_cntr;
    std::cout << "������� ������, ���������� x ������ � ���������� y ������ ��� ���������� 2: ";
    std::cin >> r >> x_cntr >> y_cntr;
    Circle circle2(r, x_cntr, y_cntr);

    std::cout << "������������ �� ���������� 1 � 2? " << std::boolalpha << circle1.isIntersected(a, b, c) << std::endl;

    return 0;
}