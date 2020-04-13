#include <iostream>
#include <string>
using namespace std;

int dlina(string a) {
    int dln = 0;
    for (int i = 1; i <= a.length(); i++) {
        dln += 1;
    }
    return dln;
}

int main()
{
    string a;
    cout << "Vvedite stroku: ";
    cin >> a;
    cout << "Dlina stroki: " << dlina(a);
}