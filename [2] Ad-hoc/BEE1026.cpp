#include <iostream>

using namespace std;

unsigned int mofiz(unsigned int a, unsigned int b) {
    return (~a & b) | (a & ~b);
}

int main() {
    unsigned int x, y;
    
    while (cin >> x >> y) {
        cout << mofiz(x, y) << endl;
    }

    return 0;
}
