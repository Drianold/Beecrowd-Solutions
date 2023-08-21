#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long double entrada;
    stringstream outputStream;
    string output;
    
    cin >> entrada;

    outputStream << fixed << setprecision(4) << scientific << entrada;
    output = outputStream.str();
    
    if (output[0] != '-') {
        cout << "+";
        output[6] = 'E';
    } else {
        output[7] = 'E';
    }

    cout << output << endl;
}
