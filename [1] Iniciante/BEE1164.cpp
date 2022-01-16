#include <iostream>

using namespace std;

int main() {
    int n, x, soma = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        
        for (int i = 1; i <= x/2; i++) {
            if (x % i == 0) {
                soma += i;
            }
        }

        if (soma == x)
            cout << x << " eh perfeito\n";
        else
            cout << x << " nao eh perfeito\n";

        soma = 0;
    }
}
