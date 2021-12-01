#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int t, vm;

    cin >> t >> vm;

    cout << fixed;
    cout << setprecision(3);
    cout << t*vm/12.0 << endl;
}
