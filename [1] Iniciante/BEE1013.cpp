#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b, c, mAB;

    cin >> a >> b >> c;
    mAB = (a+b+abs(a-b))/2;
    cout << (mAB+c+abs(mAB-c))/2 << " eh o maior\n";
}
