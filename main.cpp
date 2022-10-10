#include <iostream>
#include <cstdlib>

using namespace std;


string demanderPrenom() {
    string prenom = "";
    cout << "Donne moi ton prénom";
    cin >> prenom;
    return prenom;
}

string demanderNom() {
    string nom = "";
    cout << "Donne moi ton nom";
    cin >> nom;
    return nom;
}

int main()
{
   string prenom = demanderPrenom();
   string nom = demanderNom();
   cout << "Bonjour " << prenom << nom;
}
