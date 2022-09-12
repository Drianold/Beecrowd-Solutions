#include <iostream>
#include <iomanip>

#define SIZE 12

using namespace std;

int main() {
    double m[SIZE][SIZE];
    int c;
    char t;
    double result = 0;

    cin >> c >> t;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        result += m[i][c];
    }

    if (t == 'M')
        result /= SIZE;

    cout << fixed;
    cout << setprecision(1);
    
    cout << result << endl;
}
