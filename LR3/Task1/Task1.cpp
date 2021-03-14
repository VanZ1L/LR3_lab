#include <iostream>
using namespace std;

double summ(int n)
{
    double summ = 0;
    for (double i = 0; i <= n; i++)
    {
        summ += pow(-1, i) * ((i + 1) / (pow(2, i - 1)));
    }
    return summ;
}

void main()
{
    int n;
    cout << "Enter n= ";
    cin >> n;
    cout << "Summ= " << summ(n);
}