#include "cone.h"
#include <cmath>
#include <iostream>
using namespace std;
#define PI 3.14159265358979323846
// Конструктор по умолчанию
Cone::Cone() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
	r = 0.0;
	h = 0.0;
}

// Конструктор с указанием радиуса и высоты
Cone::Cone(double r, double h) {
	x = 0.0;
	y = 0.0;
	z = 0.0;
	this->r = r;
	this->h = h;
}

// Конструктор с указанием координат и размеров
Cone::Cone(double x, double y, double z, double r, double h) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->r = r;
	this->h = h;
}

// Метод ввода данных о конусе
void Cone::input() {
	cout << "Введите координаты центра основания (x, y, z): ";
	cin >> x >> y >> z;
	cout << "Введите радиус основания: ";
	cin >> r;
	cout << "Введите высоту конуса: ";
	cin >> h;
}

// Метод вывода данных о конусе на экран
void Cone::output() {
	cout << "Конус с центром основания в (" << x << ", " << y << ", " << z << ")" << std::endl;
	cout << "Радиус основания: " << r << std::endl;
	cout << "Высота конуса: " << h << std::endl;
}

// Метод вычисления площади поверхности конуса
double Cone::surfaceArea() {
	double s = PI * r * (r + sqrt(pow(h, 2) + pow(r, 2)));
	return s;
}

// Метод вычисления объема конуса
double Cone::volume() {
	double v = (1.0 / 3.0) * PI * pow(r, 2) * h;
	return v;
};