#include <iostream>
using namespace std;
int main() {
    int actualValue;
    cin >> actualValue;
    int assessed = actualValue * 60 / 100;
    int tax = assessed * 75 / 10000;
    cout << "Gia tri danh gia: " << assessed << endl;
    cout << "Thue tai san: " << tax << endl;
    return 0;
}

