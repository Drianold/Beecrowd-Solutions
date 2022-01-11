#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double nota, soma;
    int v = 0, x = 1;

    cout << fixed;
    cout << setprecision(2);

    while (x == 1) {
        while (v < 2) {
            cin >> nota;
            if (0.0 <= nota && nota <= 10.0) {
                if (v == 0)
                    soma = nota;
                else
                    soma += nota;
                v++;
            } else {
                cout << "nota invalida\n";
            }
        }
        cout << "media = " << soma/2.0 << endl;
        v = 0;

        do {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> x;
        } while (x != 1 && x != 2);
    }
}
