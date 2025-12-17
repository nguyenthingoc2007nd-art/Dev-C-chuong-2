#include <iostream>
using namespace std;
int main() {
    int gallons;
    int miles;
    cout << "Nhap so gallon xang: ";
    cin >> gallons;
    cout << "Nhap so dam di duoc: ";
    cin >> miles;
    int mpg = miles / gallons;
    cout << "So dam tren moi gallon: " << mpg;
    return 0;
}

