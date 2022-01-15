#include <iostream>

using namespace std;

int main() {
    int n, x, y, soma = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        x = (x % 2 != 0) ? x : x+1;

        for (int i = 0; i < y; i++) {
            soma += x + 2*i;
        }

        cout << soma << endl;
        soma = 0;
    }
}
