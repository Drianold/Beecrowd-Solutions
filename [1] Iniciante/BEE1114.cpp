#include <iostream>

using namespace std;

int main() {
    int s;

    cin >> s;

    while (s != 2002) {
        cout << "Senha Invalida\n";
        cin >> s;
    }

    cout << "Acesso Permitido\n";
}
