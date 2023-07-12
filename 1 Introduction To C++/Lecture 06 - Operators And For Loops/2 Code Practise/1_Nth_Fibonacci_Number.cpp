/*
    Nth Fibonacci Number

    Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
        F(n) = F(n-1) + F(n-2),
        Where, F(1) =  1,
            F(2) = 1

    Provided N you have to find out the Nth Fibonacci Number.
    Handle edges cases like when n=1 or n=2 by using conditionals like if else and return what's exprected.

    Input Format :

        The first line of each test case contains a real number ‘N’.

    Output Format :
        For each test case, print its equivalent Fibonacci number.

    Constraints:
    1 <= N <= 10000
    Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.

    Time Limit: 1 second

    Sample Input 1:
    6
    Sample Output 1:
    8

    Explanation
    Now the number is ‘6’ so we have to find the “6th” Fibonacci number
    So by using the property of the Fibonacci series i.e

    [ 1, 1, 2, 3, 5, 8, 13, 21]
    So the “6th” element is “8” hence we get the output.

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int previousValue = 1;
    int currentValue = 1;
    int total = 0;
    if (n == 1)
    {
        cout << currentValue << " ";
    }
    else if (n == 2)
    {
        cout << currentValue << " ";
    }
    else
    {
        for (int i = 1; i <= n - 2; i++)
        {
            total = currentValue + previousValue;
            previousValue = currentValue;
            currentValue = total;
        }
        cout << total;
    }
}