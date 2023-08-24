/**
 * @author Drianold
 * @name Bazinga!
*/

#include <iostream>

using namespace std;

string resultado(string entSheldon, string entRaj) {
    if (entSheldon == entRaj)
        return "De novo!";
    
    if (entSheldon == "tesoura" && entRaj == "papel") return "Bazinga!";
    else if (entSheldon == "tesoura" && entRaj == "lagarto") return "Bazinga!";
    else if (entSheldon == "papel" && entRaj == "pedra") return "Bazinga!";
    else if (entSheldon == "papel" && entRaj == "Spock") return "Bazinga!";
    else if (entSheldon == "pedra" && entRaj == "lagarto") return "Bazinga!";
    else if (entSheldon == "pedra" && entRaj == "tesoura") return "Bazinga!";
    else if (entSheldon == "lagarto" && entRaj == "Spock") return "Bazinga!";
    else if (entSheldon == "lagarto" && entRaj == "papel") return "Bazinga!";
    else if (entSheldon == "Spock" && entRaj == "tesoura") return "Bazinga!";
    else if (entSheldon == "Spock" && entRaj == "pedra") return "Bazinga!";
    else return "Raj trapaceou!";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string entSheldon, entRaj;

    cin >> t;

    for (int i = 1; i < t+1; i++) {
        cin >> entSheldon >> entRaj;
        cout << "Caso #" << i << ": " << resultado(entSheldon, entRaj) << "\n";
    }
}
