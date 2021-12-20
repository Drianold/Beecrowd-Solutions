#include <iostream>

using namespace std;

int main() {
    int hi, hf;

    cin >> hi >> hf;

    if (hi < hf)
        cout << "O JOGO DUROU " << (hf - hi) << " HORA(S)\n";
    else
        cout << "O JOGO DUROU " << (24-hi) + hf << " HORA(S)\n";
}
