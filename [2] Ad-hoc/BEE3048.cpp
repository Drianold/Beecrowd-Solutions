#include <iostream>

using namespace std;

int main() {
    int n, v, last, res = 0;

    cin >> n;
    
    cin >> v;
    last = v;
    res = 1;

    for (int i = 1; i < n; i++) {
        cin >> v;
        if (v != last) {
            last = v;
            res++;
        }
    }

    cout << res << endl;
}
