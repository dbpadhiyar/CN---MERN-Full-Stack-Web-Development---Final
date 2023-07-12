/*
    Second Largest
Send Feedback
Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
Input format :

Line 1 : Total number of elements (n)

Line 2 : N elements (separated by space)
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, largest_number = INT_MIN, second_largest = INT_MIN;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int element;
        cin >> element;
        if (element > largest_number)
        {
            second_largest = largest_number;
            largest_number = element;
        }
        else if (element != largest_number && element > second_largest)
        {
            second_largest = element;
        }
    }
    if (n <= 1)
        second_largest = INT_MIN;

    cout
        << second_largest;
}