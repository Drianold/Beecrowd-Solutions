#include <iostream>

using namespace std;

int main() {
    int input, n = 0;

    for (int i = 0; i < 5; i++) {
        cin >> input;
        if (input % 2 == 0)
            n++;
    }

    cout << n << " valores pares\n";
}
