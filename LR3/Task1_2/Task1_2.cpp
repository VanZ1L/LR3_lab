#include <iostream>
using namespace std;

double summ(int n)
{
	double summ = 0;
	double i = 0;
	while (i<=n)
	{
		summ += pow(-1, i) * ((i + 1) / (pow(2, i - 1)));
		i++;
	} return summ;
}
void main()
{
	int n;
	cout << "Enter n= ";
	cin >> n;
	cout << "Summ= " << summ(n);
}