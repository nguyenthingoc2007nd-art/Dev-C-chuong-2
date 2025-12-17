#include <iostream>
using namespace std;
int main() {
    int palletEmpty, palletLoaded;
    cout << "Nhap trong luong pallet rong: ";
    cin >> palletEmpty;
    cout << "Nhap trong luong pallet co hang: ";
    cin >> palletLoaded;
    int widgets = (palletLoaded - palletEmpty) / 12;
    cout << "So vat dung: " << widgets;
    return 0;
}

