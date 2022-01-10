#include <iostream>

using namespace std;

int main() {
    int m, n, temp, soma = 0;

    cin >> m >> n;

    while (m > 0 && n > 0) {
        if (m > n) {
            temp = m;
            m = n;
            n = temp;
        }

        for (int i = m; i <= n; soma += i, i++) {
            cout << i << ' ';
        }
        cout << "Sum=" << soma << endl;

        soma = 0;
        cin >> m >> n;
    }
}
