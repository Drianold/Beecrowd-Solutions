#include <iostream>

using namespace std;

int main() {
    int n, alc = 0, gas = 0, die = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << (4*i + 1) << ' ' <<  (4*i + 2) << ' ' <<  (4*i + 3) << " PUM\n";
    }
}
