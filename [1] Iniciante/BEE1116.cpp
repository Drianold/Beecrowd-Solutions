#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, x, y;

    cin >> n;

    cout << fixed;
    cout << setprecision(1);

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        
        if (y == 0) {
            cout << "divisao impossivel\n";
        } else {
            cout << double(x)/double(y) << endl;
        }
    }
}
