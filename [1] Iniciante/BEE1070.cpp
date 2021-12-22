#include <iostream>

using namespace std;

int main() {
    int x;

    cin >> x;

    x += -1*(x % 2) + 1;

    for (int i = x; i < (x+12); i += 2) {
        cout << i << endl;
    }
}
