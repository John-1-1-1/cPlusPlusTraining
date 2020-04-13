#include <iostream>
using namespace std;

int step(int a, int b) {
    int c = a;
    while (b - 1 > 0) {
        a *= c;
        b -= 1;
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Vvedite chislo, kotoroe hotite vosvesti v stepen: ";
    cin >> a;
    cout << "Vvedite stepen: ";
    cin >> b;
    cout << "Vosvedenie: " << step(a, b);
    return 0;
}