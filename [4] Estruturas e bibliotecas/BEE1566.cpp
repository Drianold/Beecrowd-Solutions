#include <iostream>

using namespace std;

int ordenar_e_imprimir(int n) {
    int h, alturas[211];

    for (int i = 0; i < 211; i++) {
        alturas[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> h;
        alturas[h-20] += 1;
    }

    for (int i = 0; i < 211; i++) {
        for (int j = 0; j < alturas[i]; j++) {
            cout << i + 20 << ' ';
        }
    }
    cout << endl;

    // for (int i = 0; i < 211; i++) {
    //     cout << alturas[i] << ' ';
    // }
    // cout << endl;
}

int main() {
    int nc, n;

    cin >> nc;

    for (int i = 0; i < nc; i++) {
        cin >> n;
        ordenar_e_imprimir(n);
    }
}
