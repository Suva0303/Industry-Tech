#include <iostream>
#include <ctime>
#include "momeDatchik.h"
#include "object.h"
#include "windows.h"

using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");

    int size = 16;
    object* objects = new object[size];

    for (int i = 0; i < size; i++)
    {
        objects[i].set(rand() % 101, rand() % 101, (rand() % 101 - 50) / 10.0, (rand() % 101 - 50) / 10.0, 0, 100, 100, 0);
    }

    momeDatchik datchik1(20, 20, 20);
    momeDatchik datchik2(20, 20, 10);
    momeDatchik datchik3(50, 50, 25);
    momeDatchik datchik4(35, 20, 20);

    while (true)
    {
        for (int i = 0; i < size; i++) objects[i].update();

        Sleep(1000);

        if (datchik1.cheak(objects, size)) cout << "Датчик 1 обнаружил " << datchik1.count(objects, size) << " объектов\n";
        else cout << "Датчик 1 не обнаружил объектов\n";
        if (datchik2.cheak(objects, size)) cout << "Датчик 2 обнаружил " << datchik2.count(objects, size) << " объектов\n";
        else cout << "Датчик 2 не обнаружил объектов\n";
        if (datchik3.cheak(objects, size)) cout << "Датчик 3 обнаружил " << datchik3.count(objects, size) << " объектов\n";
        else cout << "Датчик 3 не обнаружил объектов\n";
        if (datchik4.cheak(objects, size)) cout << "Датчик 4 обнаружил " << datchik4.count(objects, size) << " объектов\n";
        else cout << "Датчик 4 не обнаружил объектов\n";
        cout << "\n";
    }

    return 0;
}