#include <iostream>

using namespace std;

int tam_max_pilha(int f1, int f2) {
    int i = f1, max;
    
    if (i > f2)
        i = f2;

    while (i > 1) {
        if (f1 % i == 0 && f2 % i == 0) {
            return i;
        }
        i--;
    }
}

int main() {
    int n, f1, f2;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> f1 >> f2;
        cout << tam_max_pilha(f1, f2) << endl;
    }
}
