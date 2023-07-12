/*
    Write a program to find x to the power n (i.e. x^n).
    Take x and n from the user.
    You need to print the answer.

    Note : For this question, you can assume that 0 raised to the power of 0 is 1

    input format :
        Two integers x and n (separated by space)

    Output Format :
        x^n (i.e. x raise to the power n)

    Constraints:
        0 <= x <= 8
        0 <= n <= 9

    Sample Input 1 :
        3 4
    Sample Output 1 :
        81
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x;
    cin >> y;

    int i = 1;
    int total = 1;
    while (i <= y)
    {
        total = total * x;
        i++;
    }
    cout << total;
}
