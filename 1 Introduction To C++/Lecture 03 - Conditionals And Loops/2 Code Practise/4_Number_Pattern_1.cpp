/*
    Print the following pattern
    Pattern for N = 4

    1
    23
    345
    4567

    Sample Input 1 :
    3

    Sample Output 1 :
    1
    23
    345

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= i + k; j++)
        {
            cout << j;
        }
        k++;
        cout << endl;
    }
}