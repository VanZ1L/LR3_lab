#include <iostream>
using namespace std;
void print(int n, int k)
{
    double count = 0;
    int i = 0;
    while (i<n)
    {
        count = pow(-1, i) * ((i + 1) / (pow(2, i - 1)));
        if ((i + 1) % k == 0)
        {
            i++;
            continue;
        }
        else
        {
            cout << count << " ";
        }
        i++;
    }

}
void main()
{
    int n, k = 0;
    cout << "Enter n = ";
    cin >> n;
    cout << "Enter k = ";
    cin >> k;
    print(n, k);
}