#include <iostream>

using namespace std;

int main() {
    int n, resto;

    cin >> n;

    cout << int(n/100) << " nota(s) de R$ 100,00\n";
    resto = n - int(n/100)*100;
    cout << int(resto/50) << " nota(s) de R$ 50,00\n";
    resto = resto - int(resto/50)*50;
    cout << int(resto/20) << " nota(s) de R$ 20,00\n";
    resto = resto - int(resto/20)*20;
    cout << int(resto/10) << " nota(s) de R$ 10,00\n";
    resto = resto - int(resto/10)*10;
    cout << int(resto/5) << " nota(s) de R$ 5,00\n";
    resto = resto - int(resto/5)*5;
    cout << int(resto/2) << " nota(s) de R$ 2,00\n";
    resto = resto - int(resto/2)*2;
    cout << int(resto/1) << " nota(s) de R$ 1,00\n";
}
