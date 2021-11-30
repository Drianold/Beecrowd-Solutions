#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b;
    double peso = 11.0;

    cin >> a >> b;

    cout << fixed;
    cout << setprecision(5);
    cout << "MEDIA = " << (a/3.5 + b/7.5) << endl;

    return 0;
}
