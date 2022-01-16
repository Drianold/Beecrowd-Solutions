#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, x;
    bool primo = true;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                primo = false;
                break;
            }
        }

        if (primo)
            cout << x << " eh primo\n";
        else
            cout << x << " nao eh primo\n";

        primo = true;
    }
}
