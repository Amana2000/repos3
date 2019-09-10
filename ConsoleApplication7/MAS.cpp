#include<iostream>
using namespace std;
void mas(int*a, unsigned n)
{
	for (unsigned i = 0; i < n; i++) {
		a[i] = rand();
	}
}
void read_mas(int*a, unsigned n) {
	for (unsigned i = 0; i < n; i++) {
		cout << a[i] << " " << endl;
	}
}