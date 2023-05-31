#include <iostream>

using namespace std;

int main() {
    char c;
    bool upper = true;

    while (cin >> noskipws >> c) {
        switch (c) {
            case '\n':
                upper = true;
            case ' ':
                cout << c;
                break;
            default:
                cout << (char) ((upper) ? toupper(c) : tolower(c));
                upper = !upper;
                break;
            }
    }
}
