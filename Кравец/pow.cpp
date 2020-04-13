#include <iostream>
using namespace std;
int step(int a, int b) {
	return pow(a, b);
}


int main()
{
	int a, b;
	cin >> a >> b;
	
	cout << step(a,b);
}

