#include <iostream>

using namespace std;

void fun(int* c, int* d) {
	int temp;
	temp = *c;
	*c = *d;
	*d = temp;
}

int main() {
	int a, b;
	cin >> a >> b;
	fun(&a, &b);
	cout << a << " " << b;
}