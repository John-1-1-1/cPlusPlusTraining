#include <iostream>

using namespace std;

int fun(char str1[]) {
	int count = 0;
	for (int i = 0; str1[i] != '\0'; i++) {
		count++;
	}

	return count;
}

int main() {
	char str[] = "jatonchik";
	cout << fun(str);
}