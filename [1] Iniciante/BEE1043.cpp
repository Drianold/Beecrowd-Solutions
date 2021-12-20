#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

bool isTriangle(double a, double b, double c) {
    return (abs(b-c) < a && a < b + c)
            && (abs(a-c) < b && b < a + c)
            && (abs(a-b) < c && c < a + b);
}

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    cout << fixed;
    cout << setprecision(1);

    if (isTriangle(a, b, c)) {
        cout << "Perimetro = " << (a + b + c) << endl;
    } else {
        cout << "Area = " << ((a+b)*c)/2.0 << endl;
    }
}
