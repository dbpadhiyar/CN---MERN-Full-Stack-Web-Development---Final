#include <iostream>
using namespace std;

int pairSum(int n, int *input, int x)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i != j && input[i] + input[j] == x)
            {
                total++;
            }
        }
    }
    return total;
}

int main()
{
    int n;
    cin >> n;

    int input[100];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int x;
    cin >> x;

    cout << pairSum(n, input, x) << endl;
}