#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double s;

    cin >> s;

    cout << fixed;
    cout << setprecision(2);

    if (0.0 <= s && s <= 2000.0)
        cout << "Isento" << endl;
    else if (2000.0 < s && s <= 3000.0)
        cout << "R$ " << (s-2000.0)*0.08 << endl;
    else if (3000.0 < s && s <= 4500.0)
        cout << "R$ " << (s-3000.0)*0.18 + 80.0 << endl;
    else
        cout << "R$ " << (s-4500.0)*0.28 + 270.0 + 80.0<< endl;
}
