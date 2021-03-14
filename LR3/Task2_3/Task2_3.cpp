#include <iostream>
using namespace std;
double summ2(double eps)
{
    int i = 0;
    double summ = 0;
    do
    {
        summ += pow(-1, i) * ((i + 1) / (pow(2, i - 1)));
        i++;
    } while (abs(summ) > eps);
    return summ;
}
void main()
{
    double eps;
    cout << "Enter eps= ";
    cin >> eps;
    cout << "Summ= " << summ2(eps);
}