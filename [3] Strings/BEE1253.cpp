#include <iostream>

using namespace std;

void decipher(string s, int k) {
    for (int i = 0; i < s.length(); i++) {
        cout << (char) (((s[i]+26-k-65) % 26) + 65);
    }
    cout << endl;
}

int main() {
    int n, k;
    string input;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input >> k;
        
        decipher(input, k);
    }
}
