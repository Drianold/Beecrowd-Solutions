#include <iostream>

#define SIZE 1000

using namespace std;

int main() {
    int n[SIZE];
    int t;

    cin >> t;
    
    for (int i = 0; i < SIZE; i++) {
        n[i] = i % t;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << "N[" << i << "] = " << n[i] << endl;
    }
}
