#include <iostream>
#include <iomanip>

#define SIZE 100

using namespace std;

int main() {
    double n[SIZE];

    cin >> n[0];
    
    for (int i = 1; i < SIZE; i++) {
        n[i] = n[i-1]/2;
    }

    cout << fixed;
    cout << setprecision(4);

    for (int i = 0; i < SIZE; i++) {
        cout << "N[" << i << "] = " << n[i] << endl;
    }
}
