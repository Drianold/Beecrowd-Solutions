#include <iostream>

using namespace std;

int main() {
    int x, soma = 0;

    cin >> x;

    while (x != 0) {
        x = (x % 2 == 0) ? x : x+1;

        for (int i = x; i < x+10; i += 2) {
            soma += i;
        }

        cout << soma << endl;
        soma = 0;

        cin >> x;
    }
}
