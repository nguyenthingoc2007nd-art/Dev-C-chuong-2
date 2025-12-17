#include <iostream>
using namespace std;
int main() {
    int actualValue;
    int taxRate; // thu? cho m?i 100$
    cout << "Nhap gia tri thuc cua nha: ";
    cin >> actualValue;
    cout << "Nhap thue tren moi 100$: ";
    cin >> taxRate;
    int assessed = actualValue * 60 / 100;
    int taxable = assessed - 5000;
    int annualTax = taxable * taxRate / 100;
    int quarterly = annualTax / 4;
    cout << "Thue hang nam: " << annualTax << endl;
    cout << "Thue hang quy: " << quarterly << endl;
    return 0;
}

