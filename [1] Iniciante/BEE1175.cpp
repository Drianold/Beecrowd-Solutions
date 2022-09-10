#include <iostream>

#define SIZE 20

using namespace std;

int main() {
    int n[SIZE];

    for (int i = SIZE-1; i >= 0; i--) {
        cin >> n[i];
    }

    for (int i = 0; i < SIZE; i++) {
        cout << "N[" << i << "] = " << n[i] << endl;
    }
}
