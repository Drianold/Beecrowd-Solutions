#include <iostream>

using namespace std;

string msg() {
    int s = 0;
    char c;
    string m;

    while (cin >> noskipws >> c) {
        if (s == 0) {
            if (c == ' ') {
                s = 1;
            } else if ('a' <= c && c <= 'z') {
                m += c;
                s = 2;
            }
        } else if (s == 1) {
            if (c == ' ') {
                s = 1;
            } else if ('a' <= c && c <= 'z') {
                m += c;
                s = 2;
            } else {
                break;
            }
        } else if (s == 2) {
            if (c == ' ') {
                s = 1;
            } else if ('a' <= c && c <= 'z') {
                s = 2;
            } else {
                break;
            }
        }
    }

    return m;
}

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << msg() << endl;
    }
}
