#include <iostream>
using namespace std;

bool isPrime(int a)
{
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
}
int main()
{
    int n;
    cout << "Enter The Value " << endl;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool isPrimeNumber = isPrime(i);
        if (isPrimeNumber)
        {
            cout << i << endl;
        }
    }
}