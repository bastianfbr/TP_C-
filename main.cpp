#include <iostream>
#include <cstdlib>

using namespace std;


string demanderPrenom() {
    string prenom = "";
    cout << "Donne moi ton prénom";
    cin >> prenom;
    return prenom;
}

string demanderNomPrenom() {
    string n_p;
    cout << "Donne moi ton nom et prénom séparé d'un espace";
    getline(cin, n_p);
    return n_p;
}


int main()
{
   string nomPrenom = demanderNomPrenom();
   cout << "Bonjour " << nomPrenom;
}
