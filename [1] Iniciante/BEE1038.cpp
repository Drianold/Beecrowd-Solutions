#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cod, qty;

    cin >> cod >> qty;

    cout << fixed;
    cout << setprecision(2);
    
    switch (cod) {
        case 1:
            cout << "Total: R$ " << qty*4.0 << endl;
            break;
        case 2:
            cout << "Total: R$ " << qty*4.5 << endl;
            break;
        case 3:
            cout << "Total: R$ " << qty*5.0 << endl;
            break;
        case 4:
            cout << "Total: R$ " << qty*2.0 << endl;
            break;
        case 5:
            cout << "Total: R$ " << qty*1.5 << endl;
            break;
        default:
            break;
    }
}
