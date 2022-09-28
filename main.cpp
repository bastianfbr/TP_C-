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

int main()
{
    cout<< sum(2, 1) << "\n";
    int val_1 = 2;
    int val_2 = 1;
    int val_3 = 3;
    reverse(val_1, val_2);
    cout << "Val 1 : " << val_1 << "\n" << "Val 2 : " << val_2;
    // Val 1 vaut 1, Val 2 vaut 2 et Val 3 vaut 3

    return 0;
}
