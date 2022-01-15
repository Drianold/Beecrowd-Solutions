#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    cout << 1 << endl;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0)
            cout << i << endl;
    }
    cout << n << endl;
}
