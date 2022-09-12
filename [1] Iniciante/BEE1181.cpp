#include <iostream>
#include <iomanip>

#define SIZE 12

using namespace std;

int main() {
    double m[SIZE][SIZE];
    int l;
    char t;
    double result = 0;

    cin >> l >> t;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> m[i][j];
        }
    }

    for (int j = 0; j < SIZE; j++) {
        result += m[l][j];
    }

    if (t == 'M')
        result /= SIZE;

    cout << fixed;
    cout << setprecision(1);
    
    cout << result << endl;
}
