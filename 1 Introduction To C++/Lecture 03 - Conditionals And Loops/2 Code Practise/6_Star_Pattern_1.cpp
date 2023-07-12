/*
    Print the following pattern
    Pattern for N = 4

        *
       ***
      *****
     *******

    Sample Input 1 :
    3

    Sample Output 1 :
      *
     ***
    *****

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int k = 1;
        while (k <= n - i)
        {
            cout << " ";
            k++;
        }

        int j = 1;
        while (j <= i * 2 - 1)
        {
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
}