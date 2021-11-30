#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double raio;
    double PI = 3.14159;

    cin >> raio;

    cout << fixed;
    cout << setprecision(4);
    cout << "A=" << (PI*raio*raio) << endl;

    return 0;
}
