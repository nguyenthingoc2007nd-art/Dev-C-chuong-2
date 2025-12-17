#include <iostream>
using namespace std;
int main() {
    int cost;
    cout << "Nhap chi phi thay the nha: ";
    cin >> cost;
    int insurance = cost * 80 / 100;
    cout << "Bao hiem toi thieu: " << insurance;
    return 0;
}

