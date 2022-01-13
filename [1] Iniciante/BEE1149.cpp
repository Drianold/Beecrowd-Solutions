#include <iostream>

using namespace std;

int main() {
    int a, n, soma = 0;

    cin >> a;

    do {
        cin >> n;
    } while (n < 1);

    for (int i = 0; i < n; i++) {
        soma += a + i;
    }

    cout << soma << endl;
}
