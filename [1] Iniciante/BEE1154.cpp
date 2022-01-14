#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int idade, soma = 0, quantidade = 0;

    cin >> idade;

    while (idade >= 0) {
        soma += idade;
        quantidade++;
        cin >> idade;
    }

    cout << fixed;
    cout << setprecision(2);

    cout << (1.0*soma)/(1.0*quantidade) << endl;
}
