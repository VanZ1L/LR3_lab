#include <iostream>
using namespace std;
double summ2(double eps)
{
    int i = 0;
    double summ = pow(-1, i) * ((i + 1) / (pow(2, i - 1)));
    while (abs(summ) > eps)
    {
        i++;
        summ += pow(-1, i) * ((i + 1) / (pow(2, i - 1)));
    } return summ;
}
void main()
{
    double eps;
    cout << "Enter eps= ";
    cin >> eps;
    cout << "Summ= " << summ2(eps);
}