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

    int i = 1;
    while (i <= n)
    {
        int k = 1;
        while (k <= n - i)
        {
            cout << " ";
            k++;
        }

        int j = i;
        while (j <= i + i - 1)
        {
            cout << j;
            j++;
        }
        i++;
        cout << endl;
    }
}