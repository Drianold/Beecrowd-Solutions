#include <iostream>
#include <string>

using namespace std;

int main() {
    string e1, e2, e3;

    cin >> e1 >> e2 >> e3;

    if (e1[0] == 'v') {
        if (e2[0] == 'a') {
            if (e3[0] == 'c'){
                cout << "aguia" << endl;
            } else {
                cout << "pomba" << endl;
            }
        } else {
            if (e3[0] == 'o'){
                cout << "homem" << endl;
            } else {
                cout << "vaca" << endl;
            }
        }
    } else {
        if (e2[0] == 'i') {
            if (e3[2] == 'm'){
                cout << "pulga" << endl;
            } else {
                cout << "lagarta" << endl;
            }
        } else {
            if (e3[0] == 'h'){
                cout << "sanguessuga" << endl;
            } else {
                cout << "minhoca" << endl;
            }
        }
    }
}
