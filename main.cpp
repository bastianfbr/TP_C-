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
    getline(cin, n_p); // getline pour obtenir toute la ligne et ne pas s'arrêter à l'espace
    return n_p;
}

void devinerNombre() {
    srand(time(NULL)); // initialisation du générateur de random
    int nb = rand() % 1001;
    int input = 1010101010;
    int nbEssais = 0;
    do {
        cout << "Devine le nombre :) \n";
        cout << "Tentative numéro " << nbEssais << "\n";
        cin >> input;

        if (input > nb) cout << "C'est plus petit ! \n";
        if (input < nb) cout << "Essaie plus grand ? \n";
        if (input == nb) cout << "Félicitations, tu as trouvé le nombre !"
                                 "c'était " << nb << "\n ... avec " << nbEssais << " essais";
        nbEssais++;
    } while(input != nb);
}

int main()
{
   string nomPrenom = demanderNomPrenom();
   cout << "Bonjour " << nomPrenom << "\n";
   devinerNombre();
}
