#include <iostream>;

using namespace std;

int main()

{
    setlocale(LC_ALL, "Russian");
    cout << "Ââåäèòå êîýôôèöèåíòû óðàâíåíèÿ" << endl;
    double a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    eq2 equation(a1, b1, c1);
    equation.find_X();
    cout << "Ââåäèòå X" << endl;
    float X;
    cin >> X;
    equation.find_Y(X);
    cout << "Ïðè çàäàííîì X,Y = " << equation.find_Y(X) << endl;
}
