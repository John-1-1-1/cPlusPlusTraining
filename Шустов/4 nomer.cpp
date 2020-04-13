#include <iostream>
#include <string>
using namespace std;

void banan(int* a, int* b) {
    int temp;
    temp = *a; // int* a 
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cout << "Vvedite dva chisla: ";
    cin >> a >> b;
    banan(&a, &b);
    cout << "Peremennaja a: " << a << ", peremennaja b: " << b;
}