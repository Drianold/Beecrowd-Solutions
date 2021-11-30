#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double radius, PI = 3.14159;

    cin >> radius;

    cout << fixed;
    cout << setprecision(3);

    cout << "VOLUME = " << ((4.0/3.0) * PI * radius * radius * radius) << endl;

    return 0;
}
