#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double s;
    int pr;

    cin >> s;

    cout << fixed;
    cout << setprecision(2);

    if (0.0 <= s && s <= 400.0)
        pr = 15;
    else if (400.0 < s && s <= 800.0)
        pr = 12;
    else if (800.0 < s && s <= 1200.0)
        pr = 10;
    else if (1200.0 < s && s <= 2000.0)
        pr = 7;
    else
        pr = 4;
    
    cout << "Novo salario: " << s*((pr+100)/100.0)
            << "\nReajuste ganho: " << (s*((pr+100)/100.0) - s)
            << "\nEm percentual: " << pr << " %\n";
}
