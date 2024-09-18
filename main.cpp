/************************************
 * Автор: Важенин С.С               *
 * Дата:  17.09.2024                *
 * Название: Лабораторная работа №2 *
 ************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double t, h, l, R1, R2;

    const int angleA = 14, speedV0 = 750;
    const double g = 9.81;
    const double sinAngleA = sin(angleA * M_PI / 180);
    const double cosAngleA = cos(angleA * M_PI / 180);
    const double sinDoubleAngleA = 2 * sinAngleA * cosAngleA;

    t = (2*speedV0*sinAngleA) / g;
    h = (pow(speedV0, 2)*pow(sinAngleA, 2)) / (2*g);
    l = (pow(speedV0, 2)*(sinDoubleAngleA)) / g;
    R1 = (pow(speedV0, 2)) / (g * cosAngleA);
    R2 = (pow(speedV0, 2) * pow(cosAngleA, 2)) / g;

    cout << "Время полета: ";
    cout << fixed << setprecision(7) << t << endl;

    cout << "Максимальная высота полета: ";
    cout << fixed << setprecision(7) << h << endl;

    cout << "Максимальная дальность полета: ";
    cout << fixed << setprecision(7) << l << endl;

    cout << "Радиус кривизны начала траектории: ";
    cout << fixed << setprecision(7) << R1 << endl;

    cout << "Радиус кривизны вершины траектории: ";
    cout << fixed << setprecision(7) << R2 << endl;
}
