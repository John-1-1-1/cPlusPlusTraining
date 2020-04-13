#include <iostream>

using namespace std;

char trans(char b[], int f) {
	char temp;
	for (int i = 0; i < f/2; i++) {
		temp = b[i];
		b[i] = b[f-1 - i];
		b[f-1 - i] = temp;
	}

	for (int i = 0; i < f; i++) {
		cout << b[i];
	}

	return b[f];
}

int main() {
	const int N = 7;
	char a[N] = "abcdef";
	trans(a, N);
}