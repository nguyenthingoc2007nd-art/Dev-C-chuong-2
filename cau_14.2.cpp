#include <iostream>
#include <string>
using namespace std;
int main() {
    string month;
    int year;
    int total;
    cin >> month >> year >> total;
    int sales = total * 100 / 106;
    int tax = total - sales;
    cout << "Thang: " << month << endl;
    cout << "Nam: " << year << endl;
    cout << "Doanh thu: " << sales << endl;
    cout << "Thue: " << tax << endl;
    return 0;
}

