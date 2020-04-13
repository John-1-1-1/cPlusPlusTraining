#include <iostream>
#include <string>
using namespace std;

void swap(int a,int b){
	int* a1 = &a;
	int* b1 = &b;
	int temp;
	temp = *a1;
	*a1 = *b1;
	*b1 = temp;
	cout << a<<' '<< b;

}

int main()
{
	int a, b;
	cin >> a >> b;
	swap(a, b);
}

