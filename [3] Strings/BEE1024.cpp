#include <iostream>
#include <string>

using namespace std;

string encrypt(string input) {
    string output(input.length(), '0');

    for (int i = 0; i < input.length(); i++) {
        if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) {
            output[input.length()-i-1] = input[i] + 3;
        } else {
            output[input.length()-i-1] = input[i];
        }
    }

    for (int i = input.length()/2; i < input.length(); i++) {
        output[i] = output[i]-1;
    }

    return output;
}

int main() {
    int n;
    string input;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, input);
        cout << encrypt(input) << '\n';
    }
}
