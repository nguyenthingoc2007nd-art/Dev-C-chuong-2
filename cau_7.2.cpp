#include <iostream>
#include <string>
using namespace std;
int main() {
    string movie;
    int adult, child;
    cout << "Nhap ten phim: ";
    cin >> movie;
    cout << "So ve nguoi lon: ";
    cin >> adult;
    cout << "So ve tre em: ";
    cin >> child;
    int total = adult * 10 + child * 6;
    int cinema = total * 20 / 100;
    int distributor = total - cinema;
    cout << "Ten phim: " << movie << endl;
    cout << "Tong doanh thu: " << total << endl;
    cout << "Rap giu lai: " << cinema << endl;
    cout << "Nha phan phoi: " << distributor << endl;
    return 0;
}

