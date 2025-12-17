#include <iostream>
using namespace std;
int main() {
    int cakes;
    cout << "Nhap so banh muon lam: ";
    cin >> cakes;
    int sugar = cakes * 15 / 48;   // 1.5 * 10
    int butter = cakes * 10 / 48;  // 1 * 10
    int flour = cakes * 275 / 48;  // 2.75 * 100
    cout << "Duong: " << sugar / 10 << "." << sugar % 10 << " coc\n";
    cout << "Bo: " << butter / 10 << "." << butter % 10 << " coc\n";
    cout << "Bot: " << flour / 100 << "." << flour % 100 << " coc\n";
    return 0;
}

