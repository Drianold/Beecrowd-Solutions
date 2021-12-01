#include <iostream>

using namespace std;

int main() {
    int n, h, m;

    cin >> n;

    h = int(n/3600);
    n = n - h*3600;
    m = int(n/60);
    n = n - m*60;

    cout << h << ":" << m << ":" << n << endl;
}
