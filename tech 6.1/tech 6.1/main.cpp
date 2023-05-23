#include "cone.h"
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    // Создание объектов
    Cone cone1(2.0, 5.0);
    Cone cone2(1.0, 3.0, 2.0, 4.0, 6.0);

    // Вычисление и вывод свойств объектов
    cout << "Площадь поверхности конуса 1: " << cone1.surfaceArea() << std::endl;
    cout << "Объем конуса 1: " << cone1.volume() << std::endl;
    cout << "Площадь поверхности конуса 2: " << cone2.surfaceArea() << std::endl;
    cout << "Объем конуса 2: " << cone2.volume() << std::endl;

    // Динамическое создание объекта
    Cone* cone3 = new Cone();
    cone3->input();
    cone3->output();
    cout << "Площадь поверхности конуса 3: " << cone3->surfaceArea() << std::endl;
    cout << "Объем конуса 3: " << cone3->volume() << std::endl;
    delete cone3;

    // Массив объектов
    const int numCones = 2;
    Cone cones[numCones] = {
      Cone(0.0, 0.0, 0.0, 2.0, 3.0),
      Cone(1.0, 1.0, 1.0, 4.0, 5.0)
    };
    for (int i = 0; i < numCones; i++) {
        cones[i].output();
        cout << "Площадь поверхности: " << cones[i].surfaceArea() << endl;
        cout << "Объем: " << cones[i].volume() << endl;
    }

    return 0;
};