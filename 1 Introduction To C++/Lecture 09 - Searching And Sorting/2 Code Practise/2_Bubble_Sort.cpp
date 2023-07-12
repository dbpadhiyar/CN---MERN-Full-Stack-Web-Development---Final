/*
    Code Bubble Sort
Send Feedback
You are given an integer array 'arr' of size 'N'.


You must sort this array using 'Bubble Sort'.


Note:
Change in the input array itself. You don't need to return or print the elements.
Example:
Input: ‘N’ = 7
'arr' = [2, 13, 4, 1, 3, 6, 28]

Output: [1 2 3 4 6 13 28]

Explanation: After applying bubble sort on the input array, the output is [1 2 3 4 6 13 28].
Input format :
The first line contains an integer 'N' representing the size of the array.

The second line contains 'N' single space-separated integers representing the elements of the array.
Output format :
The output contains the array elements after the sorting.
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28
Explanation of Sample Output 1:
After applying bubble sort on the input array, the output is [1 2 3 4 6 13 28].
Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9
Explanation of Sample Output 2:
After applying bubble sort on the input array, the output is [0 2 3 6 9].
Constraints :
1 <= N <= 10^3
0 <= arr[i] <= 10^9
Time Limit: 1 sec

    in Bubble sort we compare current index value with next index value
    if next index value is smaller we swap each other
*/

#include <iostream>
using namespace std;

void bubbleSort(int *input, int size)
{
    for (int j = 0; j < size - 2; j++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (input[i] > input[i + 1])
            {
                int temp = input[i + 1];
                input[i + 1] = input[i];
                input[i] = temp;
            }
        }
    }
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

    bubbleSort(input, size);

    for (int i = 0; i < size; i++)
    {
        cout << input[i] << ' ';
    }
}