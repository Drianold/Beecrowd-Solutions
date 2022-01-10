#include <iostream>

using namespace std;

int main() {
    int m, n;

    cin >> m >> n;

    while (m != n) {
        if (m > n)
            cout << "Decrescente\n";
        else
            cout << "Crescente\n";
    
        cin >> m >> n;
    }
}
