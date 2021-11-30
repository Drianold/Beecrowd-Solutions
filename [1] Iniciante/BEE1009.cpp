#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string name;
    double salary, revenues;

    cin >> name >> salary >> revenues;

    cout << fixed;
    cout << setprecision(2);

    cout << "TOTAL = R$ " << (salary + 0.15*revenues) << endl;

    return 0;
}
