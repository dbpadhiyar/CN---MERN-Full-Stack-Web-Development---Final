/*
    Code Binary Search


    You are given an integer array 'A' of size 'N', sorted in ascending order.
    You are also given an integer 'target'.


    Your task is to write a function to search for 'target' in the array 'A'. If it exists,
    return its index in 0-based indexing. Otherwise, return -1.

    Note: You must write an algorithm whose time complexity is O(logN).


    Example:

    Input: ‘N’ = 7 ‘target’ = 3
    ‘A’ = [1, 3, 7, 9, 11, 12, 45]

    Output: 1

    Explanation: For A = [1, 3, 7, 9, 11, 12, 45],
    The index of element '3' is 1.
    Hence, the answer is '1'.
    Input format :
    The first line contains an Integer 'N', which denotes the size of the array/list.

    The second line contains 'N' single space-separated integers representing the elements in the array/list.

    The third line contains the value of 'target' to be searched for in the array/list.
    Output Format :
    Return the index at which 'target' is present for each test case, -1 otherwise.
    Sample Input 1:
    7
    1 3 7 9 11 12 45
    3
    Sample Output 1:
    1

    Explanation of sample output 1:
    For nums = [1, 3, 7, 9, 11, 12, 45],
    The index of element '3' is 1.
    Hence, the answer is '1'.


    Sample Input 2:
    7
    1 2 3 4 5 6 7
    9
    Sample Output 2:
    -1
    Explanation of sample output 2:
    For nums = [1, 2, 3, 4, 5, 6, 7],
    Element '9' doesn't exist.
    Hence, the answer is '-1'.


    Constraints :
    1 <= N <= 10^4
    1 <= A[i] <= 10^9
    1 <= target <= 10^9
    Time Limit: 1 sec

    Constraints : Input Element must be sorted in Binary search

    Algo : In binary search we divide the arrayin two part
           After we check the number we want to find is left side or right side
           after that we divide that array as well until we get out element or we finish array

           In Linear Search we have to perform all operation
*/

#include <iostream>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    int begineer = 0;
    int end = n - 1;

    while (begineer <= end)
    {
        int mid = (begineer + end) / 2;
        if (input[mid] == val)
        {
            return mid;
        }
        else if (input[mid] > val)
        {
            end = mid - 1;
        }
        else
        {
            begineer = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    cin >> size;

    int input[100];

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    int val;
    cin >> val;

    int result = binarySearch(input, size, val);

    cout << result;
}