#include <iostream>

using namespace std;

int main() {
    int n, fatorial = 1;

    cin >> n;

    for (int i = 0; i < n; i++) {
        fatorial *= (n-i);
    }
    cout << fatorial << endl;
}
