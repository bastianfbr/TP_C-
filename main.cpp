#include <iostream>
#include <cstdlib>

using namespace std;

int sum(int a, int b) {
    return a+b;
}

void reverse(int &a, int &b) {
    int c = a;
    a = b;
    b = c;

}

void addAndReverse_p(int* a, int* b, int* c) {
    *c = *a + *b;
}

void addAndReverse_r(int &a, int &b, int &c) {
    c = a + b;
}

int* randomTab() {
    int* tab = new int[10];
    for (int i = 0; i < 10; i++) {
        tab[i] = rand();
    }

    return tab;
}

void order(int* tab) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (tab[j] > tab[i]) {
                reverse(tab[i], tab[j]);
            }
        }
    }
}

int main()
{
    cout<< sum(2, 1) << "\n";
    int val_1 = 2;
    int val_2 = 1;
    int val_3 = 3;
    reverse(val_1, val_2);
    cout << "Val 1 : " << val_1 << "\n" << "Val 2 : " << val_2;
    // Val 1 vaut 1, Val 2 vaut 2 et Val 3 vaut 3
    cout << "Val 1 : " << val_1 << "\n" << "Val 2 : " << val_2;
    // puis on affecte la troisième valeur à la somme des deux premières
        // ici avec des pointeurs
    addAndReverse_p(&val_1, &val_2, &val_3);
        // ici avec des références
    addAndReverse_r(val_1, val_2, val_3);
    // création d'un pointeur avec affectation de l'adresse du retour de randomTab()
    int* ptr_tab = randomTab();
    // Parcours du tableau :
    for (int i = 0; i < 10; i++) {
        cout <<"\n Valeur " << i << " : " << ptr_tab[i];
    }
    order(ptr_tab);
    cout << "Après tri : \n";
    for (int i = 0; i < 10; i++) {
        cout <<"\n Valeur " << i << " : " << ptr_tab[i];
    }
}
