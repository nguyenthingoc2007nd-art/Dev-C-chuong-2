#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int a = rand() % 100;
    int b = rand() % 100;
    cout << "  " << a << endl;
    cout << "+ " << b << endl;
    cout << "-----\n";
    cin.get();
    cout << "Ket qua: " << a + b << endl;
    return 0;
}

