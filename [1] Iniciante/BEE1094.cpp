#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, qtd, c = 0, r = 0, s = 0, total = 0;
    char tipo;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> qtd >> tipo;
        total += qtd;
        switch (tipo) {
            case 'C':
                c += qtd;
                break;
            case 'R':
                r += qtd;
                break;
            case 'S':
                s += qtd;
                break;
        }
    }

    cout << fixed;
    cout << setprecision(2);

    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << ((100.0*c)/(1.0*total)) << " %\n";
    cout << "Percentual de ratos: " << ((100.0*r)/(1.0*total)) << " %\n";
    cout << "Percentual de sapos: " << ((100.0*s)/(1.0*total)) << " %\n";
}
