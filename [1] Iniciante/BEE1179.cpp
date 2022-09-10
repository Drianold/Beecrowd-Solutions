#include <iostream>

#define N 15
#define SIZE 5

using namespace std;

int main() {
    int par[SIZE];
    int imp[SIZE];
    int nP = 0, nI = 0, v;
    
    for (int i = 0; i < N; i++) {
        cin >> v;
        
        if (v % 2 == 0) {
            par[nP++] = v;
        } else {
            imp[nI++] = v;
        }

        if (nP == SIZE) {
            for (int i = 0; i < SIZE; i++) {
                cout << "par[" << i << "] = " << par[i] << endl;
            }
            nP = 0;
        }

        if (nI == SIZE) {
            for (int i = 0; i < SIZE; i++) {
                cout << "impar[" << i << "] = " << imp[i] << endl;
            }
            nI = 0;
        }
    }

    for (int i = 0; i < nI; i++) {
        cout << "impar[" << i << "] = " << imp[i] << endl;
    }

    for (int i = 0; i < nP; i++) {
        cout << "par[" << i << "] = " << par[i] << endl;
    }
}
