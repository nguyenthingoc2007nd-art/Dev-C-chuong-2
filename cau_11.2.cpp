#include <iostream>
using namespace std;
int main() {
    int loan, insurance, gas, oil, tires, maintenance;
    cout << "Nhap chi phi vay: ";
    cin >> loan;
    cout << "Nhap bao hiem: ";
    cin >> insurance;
    cout << "Nhap tien xang: ";
    cin >> gas;
    cout << "Nhap tien dau: ";
    cin >> oil;
    cout << "Nhap lop xe: ";
    cin >> tires;
    cout << "Nhap bao duong: ";
    cin >> maintenance;
    int monthly = loan + insurance + gas + oil + tires + maintenance;
    int yearly = monthly * 12;
    cout << "Chi phi hang thang: " << monthly << endl;
    cout << "Chi phi hang nam: " << yearly << endl;
    return 0;
}

