/*
   Code Merge Two Sorted Arrays
Send Feedback
You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, merge them into a third array/list such that the third array is also sorted.
Note:
Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements of the first array/list.

Third line contains an integer 'M' representing the size of the second array/list.

Fourth line contains 'M' single space separated integers representing the elements of the second array/list.
Output Format :
For each test case, print the sorted array/list(of size N + M) in a single row, separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
0 <= M <= 10^5
Time Limit: 1 sec
Note:
Consider the case when size of the two arrays is not same.
Sample Input 1 :
1
5
1 3 4 7 11
4
2 4 6 13
Sample Output 1 :
1 2 3 4 4 6 7 11 13
Sample Input 2 :
2
3
10 100 500
7
4 7 9 25 30 300 450
4
7 45 89 90
0
Sample Output 2 :
4 7 9 10 25 30 100 300 450 500
7 45 89 90
*/

#include <iostream>
using namespace std;

void merge(int *input, int size1, int *input2, int size2)
{
    int size3 = size1 + size2;
    int input3[size3];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < size1 || j < size2)
    {
        if (input[i] < input2[j])
        {
            input3[k++] = input[i++];
        }
        else
        {
            input3[k++] = input2[j++];
        }
    }

    if (i < size1)
    {
        input3[k++] = input[i++];
    }

    if (j < size2)
    {
        input3[k++] = input2[j++];
    }

    for (int l = 0; l < size3; l++)
    {
        cout << input3[l] << ' ';
    }
}

int main()
{
    int size1;
    cin >> size1;

    int input[100];

    for (int i = 0; i < size1; i++)
    {
        cin >> input[i];
    }

    int size2;
    cin >> size2;

    int input2[100];

    for (int j = 0; j < size2; j++)
    {
        cin >> input2[j];
    }

    merge(input, size1, input2, size2);
}