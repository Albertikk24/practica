/*********************************
 * Автор:     Иккерт А.С.        *
 * Название:  Линейные алгоритмы *
 *********************************/
 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    const double PI = 3.14159265358979323846;
    const double a = 16.74;
    
    // Треугольник (n=3)
    double R3_special = a * sqrt(3) / 3;
    double R3_general = a / (2 * sin(PI / 3));
    
    cout << "Triangle (n=3):" << endl;
    cout << "Special formula: R = " << R3_special << endl;
    cout << "General formula: R = " << R3_general << endl;
    cout << "Expected result: 9,664843" << endl;
    cout << endl;
    
    // Пятиугольник (n=5)
    double R5_special = a * sqrt(0.5 + sqrt(5) / 10);
    double R5_general = a / (2 * sin(PI / 5));
    cout << "Pentagon (n=5):" << endl;
    cout << "Special formula: R = " << R5_special << endl;
    cout << "General formula: R = " << R5_general << endl;
    cout << "Expected result: 14,239894" << endl;
    cout << endl;
    
    // Восьмиугольник (n=8)
    double R8_special = a * sqrt(1 + sqrt(2) / 2);
    double R8_general = a / (2 * sin(PI / 8));
    cout << "Octagon (n=8):" << endl;
    cout << "Special formula: R = " << R8_special << endl;
    cout << "General formula: R = " << R8_general << endl;
    cout << "Expected result: 21,871863" << endl;
    cout << endl;
    
    // Десятиугольник (n=10)
    double R10_special = a * (1 + sqrt(5)) / 2;
    double R10_general = a / (2 * sin(PI / 10));
    cout << "Decagon (n=10):" << endl;
    cout << "Special formula: R = " << R10_special << endl;
    cout << "General formula: R = " << R10_general << endl;
    cout << "Expected result: 27,085888" << endl;
    cout << endl;
    
    return 0;
}