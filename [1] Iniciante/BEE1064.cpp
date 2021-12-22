#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double input, soma = 0;
    int n = 0;

    for (int i = 0; i < 6; i++) {
        cin >> input;
        if (input > 0.0) {
            soma += input;
            n++;
        }
    }

    cout << fixed;
    cout << setprecision(1);

    cout << n << " valores positivos\n";
    cout << soma/(n*1.0) << endl;
}
