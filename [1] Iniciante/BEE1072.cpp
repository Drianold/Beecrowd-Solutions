#include <iostream>

using namespace std;

int main() {
    int n, x, in = 0, out = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (10 <= x && x <= 20)
            in++;
        else
            out++;
    }

    cout << in << " in\n";
    cout << out << " out\n";
}
