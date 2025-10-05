/*********************************
 * Автор:     Иккерт А.С.        *
 * Название:  Линейные алгоритмы *
 * Вариант:   7                  *
 *********************************/
 
#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;
const double a = 16.74;

int main() {
    
    int n;
    cout << "Enter n (number of sides): ";
    cin >> n;
    
    // Вычисление по общей формуле 
    double rGeneral = a / (2.0 * sin(PI / static_cast<double>(n)));
    
    double rSpecial = 0.0;
    
    switch(n) {
        case 3:
            rSpecial = a * sqrt(3.0) / 3.0;
            cout << "Triangle (n=3):" << endl;
            break;
        case 5:
            rSpecial = a * sqrt(0.5 + sqrt(5.0) / 10.0);
            cout << "Pentagon (n=5):" << endl;
            break;
        case 8:
            rSpecial = a * sqrt(1.0 + sqrt(2.0) / 2.0);
            cout << "Octagon (n=8):" << endl;
            break;
        case 10:
            rSpecial = a * (1.0 + sqrt(5.0)) / 2.0;
            cout << "Decagon (n=10):" << endl;
            break;
        default:
            cout << "For n=" << n << " special formula is not defined." << endl << "General formula: R = " << rGeneral << endl;
            return 0;
    }
    
    // Вывод результатов 
    cout << "Special formula: R = " << rSpecial << endl << "General formula: R = " << rGeneral << endl;
    
    // Вывод ожидаемых результатов для сравнения
    switch(n) {
        case 3:
            cout << "Expected result: 9,664843" << endl;
            break;
        case 5:
            cout << "Expected result: 14,239894" << endl;
            break;
        case 8:
            cout << "Expected result: 21,871863" << endl;
            break;
        case 10:
            cout << "Expected result: 27,085888" << endl;
            break;
    }
    
    return 0;
}