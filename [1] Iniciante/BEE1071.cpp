#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x, y, temp, n = 0;

    cin >> x >> y;

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    x = (x+1) + (-1*abs((x+1) % 2) + 1);
    y = (y-1) - (-1*abs((y-1) % 2) + 1);

    for (int i = x; i <= y; n += i, i += 2);

    cout << n << endl;
}
