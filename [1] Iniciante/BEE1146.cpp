#include <iostream>

using namespace std;

int main() {
    int x;

    cin >> x;

    while (x != 0) {
        cout << 1;
        for (int i = 2; i < x+1; i++)
            cout << ' ' << i;
        cout << endl;

        cin >> x;
    }
}
