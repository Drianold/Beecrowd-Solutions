#include <iostream>

using namespace std;

int main() {
    int n, a = 0, p = 1, temp;

    cin >> n;

    cout << 0;
    for (int i = 1; i < n; i++) {
        temp = a;
        a = p;
        p += temp;
        cout << ' ' << a;
    }
    cout << endl;
}
