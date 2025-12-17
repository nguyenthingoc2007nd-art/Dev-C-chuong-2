#include <iostream>
using namespace std;
int main() {
    int d1, d2, d3, d4, d5;
    cout << "Nhap 5 diem: ";
    cin >> d1 >> d2 >> d3 >> d4 >> d5;
    int avg10 = (d1 + d2 + d3 + d4 + d5) * 10 / 5;
    cout << "Diem trung binh: "
         << avg10 / 10 << "." << avg10 % 10;
    return 0;
}

