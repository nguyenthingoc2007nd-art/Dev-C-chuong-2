#include <iostream>
using namespace std;
int main() {
    int principal, rate, times;
    cout << "Nhap tien goc: ";
    cin >> principal;
    cout << "Nhap lai suat (%): ";
    cin >> rate;
    cout << "Nhap so lan tinh lai: ";
    cin >> times;
    int amount = principal * (100 + rate) / 100;
    cout << "So tien sau 1 nam: " << amount;
    return 0;
}

