#include <iostream>
using namespace std;
int main() {
    int dollar;
    cin >> dollar;
    int yen = dollar * 9893 / 100;
    int euro = dollar * 74 / 100;
    cout << "Yen: " << yen << ".00\n";
    cout << "Euro: " << euro << ".00\n";
    return 0;
}

