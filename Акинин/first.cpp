#include <iostream>

using namespace std;

int paw(int f, int a) {

	int f1 = 1;

	for (int i = 0; i < a; i++) {
		f1 = f * f1;
	}
	
	return f1;
}

int main()
{
	int m, n;
	cin >> m >> n;
	cout << paw(m, n);
}