#include<iostream>
using namespace std;

long long tab[1000000]; 


int szukaj(int l, int p, long szukana)
{
	if (l > p)
		return -1;

	int sr = (l + p) / 2;

	if (szukana == tab[sr])
		return sr;

	if (szukana < tab[sr])
		return szukaj(l, sr - 1, szukana); 
	else
		return szukaj(sr + 1, p, szukana); 
}

int main()
{
	long long n, szukana;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> tab[i];

	cin >> szukana;

	int pozycja = szukaj(0, n - 1, szukana);

	if (pozycja == -1)
		cout << "Liczba " << szukana << " nie występuje w zbiorze" << endl;
	else
		cout << "Liczba " << szukana
		<< " występuje w zbiorze w komórce o numerze " << pozycja << endl;

	return 0;
}