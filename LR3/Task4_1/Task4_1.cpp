#include <iostream>
using namespace std;
int findFirstElement(double eps)
{  
    double count = 0;
    double i;
    for (i = 0; ; i++)
    {
        count = pow(-1, i) * ((i + 1) / (pow(2, i - 1)));
        if (abs(count) < eps)
        {
            break;
        }
    }
    return i+1;
}
void main()
{
    double eps;
    cout << "Enter eps= ";
    cin >> eps;
    cout << "Number= " << findFirstElement(eps);
}