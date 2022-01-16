#include <iostream>

using namespace std;

int main() {
    int t, x = -1;
    double pa, pb, g1, g2;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> pa >> pb >> g1 >> g2;

        g1 = g1/100.0 + 1.0;
        g2 = g2/100.0 + 1.0;

        for (int i = 1; i < 101; i++) {
            pa = int(pa*g1);
            pb = int(pb*g2);

            if (int(pa) > int(pb)) {
                x = i;
                break;
            }
        }

        if (x == -1)
            cout << "Mais de 1 seculo.\n";
        else
            cout << x << " anos.\n";

        x = -1;
    }
}
