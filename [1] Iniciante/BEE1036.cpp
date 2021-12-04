#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double a, b, c;
    double delta, x1, x2;

    cin >> a >> b >> c;

    delta = b*b - 4.0*a*c;

    if (delta >= 0 && a != 0) {
        x1 = (-b + sqrt(delta))/(2.0*a);
        x2 = (-b - sqrt(delta))/(2.0*a);
        cout << fixed;
        cout << setprecision(5);
        cout << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl; 
    } else {
        cout << "Impossivel calcular" << endl;
    }
}
