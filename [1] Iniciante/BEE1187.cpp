#include <iostream>
#include <iomanip>

#define SIZE 12

using namespace std;

int main() {
    double m[SIZE][SIZE];
    char o;
    double result = 0;

    cin >> o;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < (SIZE/2)-1; i++) {
        for (int j = i+1; j < SIZE-i-1; j++) {
            result += m[i][j];
        }
    }

    if (o == 'M')
        result /= (SIZE*SIZE-2*SIZE)/4.0;

    cout << fixed;
    cout << setprecision(1);
    
    cout << result << endl;
}
