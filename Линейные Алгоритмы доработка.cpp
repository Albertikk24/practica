/*********************************
 * Автор:     Иккерт А.С.        *
 * Название:  Линейные алгоритмы *
 * Вариант:   7                  *
 *********************************/
 
 
 
#include <iostream>
#include <cmath>

using namespace std;



int main() {
    
    double a;
    int n;
    const double PI = 3.14159265358979323846;
    
    // Ввод значения стороны с клавиатуры
    cout << "Enter the side length of the polygon a: ";
    cin >> a;
    
    cout << "Enter the number of polygon angles n: ";
    cin >> n;
    
    // Объявление переменных
    double R_special, R_general;
    
    // Вычисление по общей формуле
    R_general = a / (2 * sin(PI / n));
    
    // Вычисление по специальным формулам в зависимости от n
    if (n == 3) {
        R_special = a * sqrt(3) / 3;
        cout << "Triangle (n=3):" << endl;
    } else if (n == 5) {
        R_special = a * sqrt(0.5 + sqrt(5) / 10);
        cout << "Pentagon (n=5):" << endl;
    } else if (n == 8) {
        R_special = a * sqrt(1 + sqrt(2) / 2);
        cout << "Octagon (n=8):" << endl;
    } else if (n == 10) {
        R_special = a * (1 + sqrt(5)) / 2;
        cout << "Decagon (n=10):" << endl;
    } else {
        cout << "For n=" << n << " special formula is not defined." << endl;
        cout << "General formula: R = " << R_general << endl;
        return 0;
    }
    
    // Вывод результатов
    cout << "Special formula: R = " << R_special << endl;
    cout << "General formula: R = " << R_general << endl;
    
    return 0;
}