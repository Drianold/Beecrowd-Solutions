#include <iostream>

using namespace std;

int main() {
    int n, pos = 0;

    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 1; i < n; i++) {
        if (x[i] < x[pos]) {
            pos = i;
        }
    }

    cout << "Menor valor: " << x[pos] << endl;
    cout << "Posicao: " << pos << endl;
}
