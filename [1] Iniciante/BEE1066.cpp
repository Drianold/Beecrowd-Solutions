#include <iostream>

using namespace std;

int main() {
    int input, pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (int i = 0; i < 5; i++) {
        cin >> input;

        if (input % 2 == 0)
            pares++;
        else
            impares++;

        if (input > 0)
            positivos++;
        if (input < 0)
            negativos++;
    }

    cout << pares << " valor(es) par(es)\n";
    cout << impares << " valor(es) impar(es)\n";
    cout << positivos << " valor(es) positivo(s)\n";
    cout << negativos << " valor(es) negativo(s)\n";
}
