#include <iostream>
#include <math.h>

using namespace std;

int tam_max_pilha_s(int a, int b) {
    int resto = a % b;

    if (resto == 0)
        return b;
    else
        return tam_max_pilha_s(b, resto);
}

int tam_max_pilha(int f1, int f2) {
    if (abs(f2) > abs(f1))
        return tam_max_pilha_s(abs(f2), abs(f1));
    else
        return tam_max_pilha_s(abs(f1), abs(f2));
}

int main() {
    int n, f1, f2;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> f1 >> f2;
        cout << tam_max_pilha(f1, f2) << endl;
    }
}
