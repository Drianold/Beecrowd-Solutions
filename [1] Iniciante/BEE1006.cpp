#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    cout << fixed;
    cout << setprecision(1);
    cout << "MEDIA = " << (a*2.0 + b*3.0 + c*5.0)/10.0 << endl;

    return 0;
}
