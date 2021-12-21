#include <iostream>

using namespace std;

int main() {
    double input;
    int n = 0;
    
    for (int i = 0; i < 6; i++) {
        cin >> input;
        if (input > 0.0)
            n++;
    }

    cout << n << " valores positivos\n";
}
