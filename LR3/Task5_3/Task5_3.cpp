#include <iostream>
using namespace std;
int findFirstNegativeElement(double eps)
{

    double count = 0;
    int i = 0;
    do
    {
        count = pow(-1, i) * ((i + 1) / (pow(2, i - 1)));
        i++;
        if (abs(count) < eps && count < 0)
        {
            return i;
        }
    } while (true);
}
void main()
{
    double eps;
    cout << "Enter eps= ";
    cin >> eps;
    cout << "Number= " << findFirstNegativeElement(eps);
}