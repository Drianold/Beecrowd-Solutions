#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n1, n2, n3, n4, exame;
    double media;

    cin >> n1 >> n2 >> n3 >> n4;

    media = (n1*2 + n2*3 + n3*4 + n4)/10;
    
    cout << fixed;
    cout << setprecision(1);
    cout << "Media: " << media << endl;
    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (media < 5) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;
        media = (media + exame)/2;
        if (media >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << media << endl;
    }
}