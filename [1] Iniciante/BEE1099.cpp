#include <iostream>

using namespace std;

int main() {
    int n, x, y, temp, soma = 0;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        
        if (x > y) {
            temp = x;
            x = y;
            y = temp;
        }

        x = ((x+1) % 2 != 0) ? x+1 : x+2;
        y = ((y-1) % 2 != 0) ? y-1 : y-2;

        for (int i = x; i <= y; soma += i, i += 2);

        cout << soma << endl;

        soma = 0;
    }
}
