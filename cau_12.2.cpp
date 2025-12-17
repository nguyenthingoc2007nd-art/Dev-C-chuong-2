#include <iostream>
using namespace std;
int main() {
    int C;
    cout << "Nhap nhiet do Celsius: ";
    cin >> C;
    int F = C * 9 / 5 + 32;
    cout << "Fahrenheit = " << F;
    return 0;
}

