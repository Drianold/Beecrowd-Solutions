#include <iostream>

using namespace std;

int main() {
    double n;
    int i, c;

    cin >> n;

    i = int(n);
    c = int(100.0*(n - i));

    cout << "NOTAS:\n";
    cout << int(i/100) << " nota(s) de R$ 100.00\n";
    i = i - int(i/100)*100;
    cout << int(i/50) << " nota(s) de R$ 50.00\n";
    i = i - int(i/50)*50;
    cout << int(i/20) << " nota(s) de R$ 20.00\n";
    i = i - int(i/20)*20;
    cout << int(i/10) << " nota(s) de R$ 10.00\n";
    i = i - int(i/10)*10;
    cout << int(i/5) << " nota(s) de R$ 5.00\n";
    i = i - int(i/5)*5;
    cout << int(i/2) << " nota(s) de R$ 2.00\n";
    i = i - int(i/2)*2;
    cout << "MOEDAS:\n";
    cout << int(i/1) << " moeda(s) de R$ 1.00\n";
    cout << int(c/50) << " moeda(s) de R$ 0.50\n";
    c = c - int(c/50)*50;
    cout << int(c/25) << " moeda(s) de R$ 0.25\n";
    c = c - int(c/25)*25;
    cout << int(c/10) << " moeda(s) de R$ 0.10\n";
    c = c - int(c/10)*10;
    cout << int(c/5) << " moeda(s) de R$ 0.05\n";
    c = c - int(c/5)*5;
    cout << int(c/1) << " moeda(s) de R$ 0.01\n";

}
