#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string v;
    char d, c;

    while (true) {
        cin >> skipws >> d >> c;

        v = "";
        v += (c == '0' || c == d) ? '0' : c;

        if (! (cin >> noskipws >> c))
            break;
        
        while (c == '0' || c == d) {
            cin >> noskipws >> c;
        }

        // -_-
        if (c == '\n' && d == '0' && v[0] == '0')
            break;

        if (v[0] == '0' && c != '\n')
            v = "";

        while (c != '\n') {
            if (c != d) v += c; 

            cin >> noskipws >> c;
        }

        cout << v << '\n';
    }
}
