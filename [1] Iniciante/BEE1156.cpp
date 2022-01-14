#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double s = 0;

    for (int i = 0; i < 19; i++) {
        s += (2.0*i + 1.0)/pow(2.0, i);
    }

    cout << fixed;
    cout << setprecision(2);

    cout << s << endl;
}
