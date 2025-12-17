#include <iostream>
using namespace std;
int main() {
    int diameter;
    cout << "Nhap duong kinh pizza: ";
    cin >> diameter;
    int radius = diameter / 2;
    int area = 314 * radius * radius / 100;
    int slices = area * 10 / 141;
    cout << "So mieng pizza: " << slices / 10 << "." << slices % 10;
    return 0;
}

