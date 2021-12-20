#include <iostream>

using namespace std;

int main() {
    int hi, mi, hf, mf, h, m;

    cin >> hi >> mi >> hf >> mf;

    if ((hi*60 + mi) < (hf*60 + mf)) {
        h = int(((hf*60 + mf) - (hi*60 + mi))/60);
        m = (hf*60 + mf) - (hi*60 + mi) - h*60;
        cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)\n";
    } else {
        h = int(((1440-(hi*60 + mi)) + (hf*60 + mf))/60);
        m = ((1440-(hi*60 + mi)) + (hf*60 + mf)) - h*60;
        cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)\n";
    }
}
