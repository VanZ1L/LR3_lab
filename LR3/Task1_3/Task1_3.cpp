#include <iostream>
using namespace std;
double summ(int n)
{
	double i = 0;
	double summ=0;
	do
	{
		summ += pow(-1, i) * ((i + 1) / (pow(2, i - 1)));
		i++;
	} while (i <= n);
	return summ;
}
void main()
{
	int n;
	cout << "Enter n= ";
	cin >> n;
	cout << "Summ= " << summ(n);
}