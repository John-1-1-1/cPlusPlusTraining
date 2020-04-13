#include <iostream>
#include <string>
using namespace std;

string stroka(string a) {
    string b;
    for (int i = a.length(); i >= 0; i--) {
        b = b + a[i];
    }
    return b;
}

int main()
{
    string a;
    cout << "Vvedite stroku dla perevorota: ";
    cin >> a;
    cout << "Stroka:" << stroka(a);
}
