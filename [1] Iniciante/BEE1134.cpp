#include <iostream>

using namespace std;

int main() {
    int cod, alc = 0, gas = 0, die = 0;

    do {
        cin >> cod;
    } while (cod < 1 || 4 < cod);

    while (cod != 4) {
        if (cod == 1)
            alc++;
        else if (cod == 2)
            gas++;
        else if (cod == 3)
            die++;

        do {
            cin >> cod;
        } while (cod < 1 || 4 < cod);
    }

    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alc << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << die << endl;
}
