#include <iostream>
using namespace std;

int step(int a, int b) {
    return pow(a, b);
}

int main()
{
    int a, b;
    cout << "Введите число, которое хотите возвести в степень: ";
    cin >> a;
    cout << "Введите степень: ";
    cin >> b;
    cout << "Возведение: " << step(a, b);
}
