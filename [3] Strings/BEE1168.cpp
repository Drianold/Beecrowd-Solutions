#include <iostream>
#include <string>

using namespace std;

int ledCounter(string line) {
    int quantity = 0;
    int qLeds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    for (int i = 0; i < line.length(); i++) {
        quantity += qLeds[line[i]-48];
    }

    return quantity;
}

int main() {
    int n;
    string line;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cin >> line;
        cout << ledCounter(line) << " leds\n";
    }
}
