/**
 * @author Drianold
 * @name Bazinga!
*/

#include <iostream>
#include <map>
#include <vector>

using namespace std;

#define RPN_INDEX 2

int inicializar(map<char, int>& rpn, vector<vector<int>>& cv, vector<string>& rps) {
    rpn["tesoura"[RPN_INDEX]] = 0;
    rpn["papel"[RPN_INDEX]]   = 1;
    rpn["pedra"[RPN_INDEX]]   = 2;
    rpn["lagarto"[RPN_INDEX]] = 3;
    rpn["Spock"[RPN_INDEX]]   = 4;

    // Regras convertidas para inteiros; linha = nSheldon, coluna = nRaj
    cv = { {0, 1, 2, 1, 2},
           {2, 0, 1, 2, 1},
           {1, 2, 0, 1, 2},
           {2, 1, 2, 0, 1},
           {1, 2, 1, 2, 0} };

    rps = { "De novo!",
            "Bazinga!",
            "Raj trapaceou!" };
}

string resultado(string entSheldon, string entRaj, map<char, int>& rpn, vector<vector<int>>& cv, vector<string>& rps) {
    int nSheldon = rpn[entSheldon[RPN_INDEX]];
    int nRaj = rpn[entRaj[RPN_INDEX]];

    return rps[cv[nSheldon][nRaj]];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string entSheldon, entRaj;

    map<char, int> regraParaNumero;
    vector<vector<int>> checaVit;
    vector<string> resultadoParaString;

    inicializar(regraParaNumero, checaVit, resultadoParaString);

    cin >> t;

    for (int i = 1; i < t+1; i++) {
        cin >> entSheldon >> entRaj;
        cout << "Caso #" << i << ": " << resultado(entSheldon, entRaj, regraParaNumero, checaVit, resultadoParaString) << "\n";
    }
}
