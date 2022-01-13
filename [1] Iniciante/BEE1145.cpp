#include <iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    for (int i = 0; i < y; i += x) {
        cout << i+1;
        for (int j = 2; j <= x; j++) {
            cout << ' ' << i + j;
        }
        cout << endl;
    }
}
