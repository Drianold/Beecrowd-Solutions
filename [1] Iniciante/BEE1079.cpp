#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double a, b, c;

    cout << fixed;
    cout << setprecision(1);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;

        cout << (a*2.0 + b*3.0 + c*5.0)/10.0 << endl;
    }
}
