#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Nhap so ve hang A: ";
    cin >> a;
    cout << "Nhap so ve hang B: ";
    cin >> b;
    cout << "Nhap so ve hang C: ";
    cin >> c;
    int total = a * 15 + b * 12 + c * 9;
    cout << "Tong doanh thu: " << total << ".00";
    return 0;
}

