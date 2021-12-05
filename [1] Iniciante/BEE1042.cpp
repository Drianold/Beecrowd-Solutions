#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b, c;
    int pri, seg, ter;

    cin >> a >> b >> c;

    if (c > a && c > b) {
        ter = c;
        if (a > b) {
            seg = a;
            pri = b;
        } else {
            seg = b;
            pri = a;
        }
    } else if (b > a && b > c) {
        ter = b;
        if (a > c) {
            seg = a;
            pri = c;
        } else {
            seg = c;
            pri = a;
        }
    } else {
        ter = a;
        if (b > c) {
            seg = b;
            pri = c;
        } else {
            seg = c;
            pri = b;
        }
    }

    cout << pri << endl << seg << endl << ter << endl;
    cout << endl;
    cout << a << endl << b << endl << c << endl;
}
