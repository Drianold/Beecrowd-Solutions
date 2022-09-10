#include <iostream>

#define SIZE 61

using namespace std;

int main() {
    uint64_t fib[SIZE];
    int t, n;

    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i < SIZE; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << endl;
    }
}
