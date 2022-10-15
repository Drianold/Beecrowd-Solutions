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

    for (int j = 0; j < (SIZE/2)-1; j++) {
        for (int i = j+1; i < SIZE-j-1; i++) {
            result += m[i][j];
        }
    }

    if (o == 'M')
        result /= (SIZE*SIZE-2*SIZE)/4.0;

    cout << fixed;
    cout << setprecision(1);
    
    cout << result << endl;
}
