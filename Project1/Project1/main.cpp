#include <iostream>
#include <stdlib.h>
using namespace std;

void swap(int i, int j)
{
	int t = i;
	i = j;
	j = t;
}

int main()
{
	int a = 1;
	int b = 2;

	//swap(a, b);

	swap(a, b);

	cout << a << endl;
	cout << b << endl;

	return 0;
}