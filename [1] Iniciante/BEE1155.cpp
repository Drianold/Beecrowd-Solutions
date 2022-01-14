#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double s = 0;

    for (int i = 1; i <= 100; i++) {
        s += (1.0)/(1.0*i);
    }

    cout << fixed;
    cout << setprecision(2);

    cout << s << endl;
}
