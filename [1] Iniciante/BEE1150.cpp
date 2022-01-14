#include <iostream>

using namespace std;

int main() {
    int x, y, soma, quantidade = 1;

    cin >> x;

    do {
        cin >> y;
    } while (y <= x);

    soma = x;
    while (soma <= y) {
        x++;
        soma += x;
        quantidade++;
    }

    cout << quantidade << endl;
}
