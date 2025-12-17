#include <iostream>
using namespace std;
int main() {
    int loan, rate, months;
    cout << "Nhap so tien vay: ";
    cin >> loan;
    cout << "Nhap lai suat thang (%): ";
    cin >> rate;
    cout << "Nhap so thang: ";
    cin >> months;
    int payment = loan / months + loan * rate / 100;
    cout << "Thanh toan moi thang: " << payment;
    return 0;
}

