#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double nota, soma;
    int v = 0;

    cout << fixed;
    cout << setprecision(2);

    cin >> nota;

    while (v < 2) {
        if (0.0 <= nota && nota <= 10.0) {
            if (v == 0)
                soma = nota;
            else
                soma += nota;
            v++;
        } else {
            cout << "nota invalida\n";
        }

        cin >> nota;
    }

    cout << "media = " << soma/2.0 << endl;
}
