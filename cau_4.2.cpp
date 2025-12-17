#include <iostream>
#include <string>
using namespace std;
int main() {
    string m1, m2, m3;
    int r1, r2, r3;
    cout << "Nhap ten thang 1: ";
    cin >> m1;
    cout << "Nhap luong mua: ";
    cin >> r1;
    cout << "Nhap ten thang 2: ";
    cin >> m2;
    cout << "Nhap luong mua: ";
    cin >> r2;
    cout << "Nhap ten thang 3: ";
    cin >> m3;
    cout << "Nhap luong mua: ";
    cin >> r3;
    int avg = (r1 + r2 + r3) / 3;
    cout << "Luong mua trung binh cua thang "
         << m1 << ", " << m2 << ", va " << m3
         << " la " << avg << " inches.";
    return 0;
}

