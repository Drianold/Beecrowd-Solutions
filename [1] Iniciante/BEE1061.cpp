#include <iostream>
#include <string>

using namespace std;

int main() {
    string tmp;
    int di, hi, mi, si, df, hf, mf, sf;
    int dt, ht, mt, st;

    cin >> tmp >> di >> hi >> tmp >> mi >> tmp >> si;
    cin >> tmp >> df >> hf >> tmp >> mf >> tmp >> sf;

    st = (sf + mf*60 + hf*3600 + df*86400) - (si + mi*60 + hi*3600 + di*86400);

    mt = int(st/60.0);
    st -= mt*60.0;
    ht = int(mt/60.0);
    mt -= ht*60.0;
    dt = int(ht/24.0);
    ht -= dt*24.0;

    cout << dt << " dia(s)\n";
    cout << ht << " hora(s)\n";
    cout << mt << " minuto(s)\n";
    cout << st << " segundo(s)\n";
}
