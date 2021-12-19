#include <iostream>

using namespace std;

int ordenar_e_imprimir(int n) {
    int min = 20, max = 230, h, spc = 0;
    int alturas[max+1] = {0};

    for (int i = 0; i < n; i++) {
        cin >> h;
        alturas[h] += 1;
    }

    for (int i = min; i <= max; i++) {
        for (int j = 0; j < alturas[i]; j++) {
            if (spc++ == 0)
                cout << i;
            else
                cout << ' ' << i;
        }
    }
    cout << endl;
}

int main() {
    int nc, n;

    ios::sync_with_stdio(false);

    cin >> nc;

    for (int i = 0; i < nc; i++) {
        cin >> n;
        ordenar_e_imprimir(n);
    }
}
