#include <iostream>
using namespace std;
int main() {
    int male, female;
    cout << "Nhap so nam: ";
    cin >> male;
    cout << "Nhap so nu: ";
    cin >> female;
    int total = male + female;
    int malePercent = male * 100 / total;
    int femalePercent = female * 100 / total;
    cout << "Ti le nam: " << malePercent << "%\n";
    cout << "Ti le nu: " << femalePercent << "%\n";
    return 0;
}

