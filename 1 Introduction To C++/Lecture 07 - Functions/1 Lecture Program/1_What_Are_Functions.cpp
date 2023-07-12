#include <iostream>
using namespace std;

int findFactorial(int a)
{
    int total = 1;
    for (int i = 1; i <= a; i++)
    {
        total *= i;
    }
    return total;
}

int main()
{
    int n, r;
    cin >> n;
    cin >> r;
    int total = findFactorial(n) / (findFactorial(r) * findFactorial(n - r));
    cout << total;
}
