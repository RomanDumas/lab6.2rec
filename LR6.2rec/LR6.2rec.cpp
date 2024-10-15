#include <iostream>

using namespace std;
int Print(int* &b, const int k, int l) {


	if (l < k) {
		cout << b[l] << ' ';
		return Print(b, k, l+1);
	
	}
	return 0;
}
void Inverse(int*& a, const int n, int i)
{
	int tmp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = tmp;
	if (i < n / 2 - 1)
		Inverse(a, n, i + 1);
}
void Imput(int*& a, int k, int i) {
	if (i > k)
		return;
	else
		a[i] = i;
	Imput(a, k, i + 1);
}

int main() {
	int l = 0;
	int k = 10;
	int* b = new int[k];
	Imput(b, k, l);
	Print(b, k, l);
	cout << endl;
	Inverse(b, k, l);
	Print(b, k, l);
	return 0;
}

