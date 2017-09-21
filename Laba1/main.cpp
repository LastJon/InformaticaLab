/*
 Progect name: Lab1_01
 Project type: Win32 Console Application
 File name: lab1.cpp
 Language: CPP, XCode, MSVS 2017 and above
 Programmers: Bushmanov Maksim Sergeevich, Zaycev Evgeniy Pavlovich
 Modified by: ...
 Created: 21/09/2017
 Last revision: 21/09/2017
 Comment: Вычисление суммы бесконечного числового ряда В 8
 */

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N = 1;//количество операций
    double Eps = 0; //диапазон
    double Sum = 0;
    double TSum = M_PI_4; //Пи деленное на 4
    int znak = 1;
    double Diff = 1;
    double chisl = 1; //числитель
    double znam= 1; //знаменатель
    //Ввод
    cout << "Введите Eps:";
    cin >> Eps;
    //Проверка ввода
    if (Eps > 1) {
        cout << "Вы ввели неправильный диапазон" << endl;
        return 0;
    }
    else {
        //Выполнение программы, если ввод правильный
    while (abs(Diff) > Eps) {
        Sum = Sum + (chisl/znam) * znak;
        cout << Sum << endl;
        N++;
        znam = (2*N) - 1;
        cout << N << endl;
        znak = znak * -1;
        cout << znak << endl;
        Diff = TSum - Sum;
        cout << Diff << endl;
    }
        cout << "Количество проссумированных элементов: " << N-1 << endl;
        cout << "Полученное значение суммы: " << Sum << endl;
    cout << "Разность суммы и точного значения: " << Diff << endl;
    return 0;
    }
}

