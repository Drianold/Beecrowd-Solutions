#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int id1, id2, qty1, qty2;
    double price1, price2;

    cin >> id1 >> qty1 >> price1;
    cin >> id2 >> qty2 >> price2;

    cout << fixed;
    cout << setprecision(2);

    cout << "VALOR A PAGAR: R$ " << (qty1*price1 + qty2*price2) << endl;

    return 0;
}
