#include <iostream>
using namespace std;
int step(int a, int b) {
	int f;
	f = a;
	for (int i = 2; i <= b; i++) {
		f = f * a;
	}
	return f;
}


int main()
{
	int a, b;
	cin >> a >> b;
	
	cout << step(a,b);
}

