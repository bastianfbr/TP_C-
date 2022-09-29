#include <iostream>

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
    return 0;
}
