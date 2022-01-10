#include <iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    while (x != 0 && y != 0) {
        if (x > 0) {
            if (y > 0)
                cout << "primeiro\n";
            else
                cout << "quarto\n";
        } else {
            if (y > 0)
                cout << "segundo\n";
            else
                cout << "terceiro\n";
        }

        cin >> x >> y;
    }
}
