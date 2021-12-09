#include <iostream>
#include <math.h>

using namespace std;

int sobrevivente(int n) {
    int maior_pot = 0, dif;
    double temp_n = n*1.0;

    while (temp_n >= 2.0) {
        temp_n /= 2.0;
        maior_pot++;
    }

    dif = n - int(pow(2, maior_pot));

    return 2*dif+1;
}

int n_to_int(string n) {
    return pow(10, (n[3]-'0')) * (10*(n[0]-'0') + (n[1]-'0'));
}

int main() {
    string n;

    cin >> n;

    while (n.compare("00e0") != 0) {
        cout << sobrevivente(n_to_int(n)) << endl;

        cin >> n;
    }
}
