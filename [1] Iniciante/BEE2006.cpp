#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, in, n = 0;

    cin >> t;
    
    for (int i = 0; i < 5; i++) {
        cin >> in;

        if (t == in) n++;
    }

    cout << n << '\n';
}
