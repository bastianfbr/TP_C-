#include <iostream>
#include <cstdlib>

using namespace std;


string demanderPrenom() {
    string prenom = "";
    cout << "Donne moi ton prénom";
    cin >> prenom;
    return prenom;
}

int main()
{
   string prenom = demanderPrenom();
   cout << "Bonjour " << prenom;
}
