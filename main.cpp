#include <iostream>
#include <cstdlib>

using namespace std;

string* echangerBalles(int j1, int j2) {
    string* v = new string[6];

    // Joueur 1
    if (j1 == 0) v[0] += "0";
    if (j1 == 1) v[0] += "15";
    if (j1 == 2) v[0] += "30";
    if (j1 >= 3) v[0] += "40";
    // Joueur 2
    if (j2 == 0) v[1] += "0";
    if (j2 == 1) v[1] += "15";
    if (j2 == 2) v[1] += "30";
    if (j2 >= 3) v[1] += "40";

    // Résultat final
    if (j1 - 1 == j2) v[2] += "Avantage1" ; else {
        if (j2 - 1 == j1) v[2] += "Avantage2" ; else {
            if (j1 - 2 >= j2) v[2] += "Gagné1" ; else {
                if (j2 - 2 >= j1) v[2] += "Gagné2" ; else {
                if (j1 == j2) v[2] += "Egalite" ;
            }
        }
    }
}
    v[3] = j1;
    v[4] = j2;

    return v;
}

void afficherScoreJeu(string* v_balles) {
    string commentaireFinal = "";
    string score1 = v_balles[0];
    string score2 = v_balles[1];

    if (v_balles[2] == "Avantage1") commentaireFinal = "Joueur 1 a actuellement l'avantage \n";
    if (v_balles[2] == "Avantage2") commentaireFinal = "Joueur 2 a actuellement l'avantage \n";
    if (v_balles[2] == "Gagné 1") commentaireFinal = "Joueur 1 gagne le jeu \n";
    if (v_balles[2] == "Gagné 2") commentaireFinal = "Joueur 2 gagne le jeu \n";
    if (v_balles[2] == "Egalite") commentaireFinal = "Les joueurs sont a egalite \n";

    cout << commentaireFinal;
    cout << "Le score est de " << score1 << " (Joueur 1) --- " << score2 << " (Joueur 2) \n";
}

int main()
{
    afficherScoreJeu(echangerBalles(2, 2));
    cout << "\n";
    afficherScoreJeu(echangerBalles(8, 9));
    cout << "\n";
    afficherScoreJeu(echangerBalles(9, 8));
    cout << "\n";
    afficherScoreJeu(echangerBalles(3, 1));
    cout << "\n";
    afficherScoreJeu(echangerBalles(2, 3));
}
