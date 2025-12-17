#include <iostream>
using namespace std;
int main() {
    int cookies;
    cout << "Nhap so banh da an: ";
    cin >> cookies;
    int calories = cookies * 300 / 3;
    cout << "Calories da tieu thu: " << calories;
    return 0;
}

