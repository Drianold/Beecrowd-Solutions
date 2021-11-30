#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, qtdh;
    double salary;

    cin >> n >> qtdh >> salary;

    cout << fixed;
    cout << setprecision(2);

    cout << "NUMBER = " << n << endl;
    cout << "SALARY = U$ " << (salary*qtdh) << endl;

    return 0;
}
