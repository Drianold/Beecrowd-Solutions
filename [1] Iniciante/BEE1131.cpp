#include <iostream>

using namespace std;

int main() {
    double nota, soma;
    int gi, gg, grenais = 0, vInter = 0, vGremio = 0, emp = 0, repetir = 1;

    while (repetir == 1) {
        grenais++;

        cin >> gi >> gg;

        if (gi > gg)
            vInter++;
        else if (gi < gg)
            vGremio++;
        else
            emp++;

        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> repetir;
    }

    cout << grenais << " grenais\n";
    cout << "Inter:" << vInter << endl;
    cout << "Gremio:" << vGremio << endl;
    cout << "Empates:" << emp << endl;
    if (vInter > vGremio)
        cout << "Inter venceu mais\n";
    else if (vInter < vGremio)
        cout << "Gremio venceu mais\n";
    else
        cout << "Nao houve vencedor\n";
}
