#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, mlen;
    string a, b;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        
        mlen = min(a.length(), b.length());

        for (int j = 0; j < mlen; j++) {
            cout << a[j] << b[j];
        }

        if (a.length() > b.length()) {
            for (int j = mlen; j < a.length(); j++) {
                cout << a[j];
            }
        } else {
            for (int j = mlen; j < b.length(); j++) {
                cout << b[j];
            }
        }

        cout << '\n';
    }
}
