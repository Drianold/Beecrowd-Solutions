#include <iostream>

using namespace std;

int main() {
    int d, y, m;

    cin >> d;

    y = int(d/365);
    d -= y*365;
    m = int(d/30);
    d -= m*30;

    cout << y << " ano(s)\n";
    cout << m << " mes(es)\n";
    cout << d << " dia(s)\n";
}
