/*
Column Wise Sum
Send Feedback
Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
ALTIMAGE

Input Format :
First and only line of input contains M and N, followed by M * N space separated integers representing the elements in the 2D array.
Output Format :
Sum of every ith column elements (separated by space)
Constraints :
1 <= M, N <= 10^3
Sample Input 1 :
4 2
1 2
3 4
5 6
7 8
Sample Output 1 :
16 20
Sample Input 2:
6 4
28 26 24 22
21 23 25 27
20 18 16 14
13 15 17 19
12 10 8  6
5  7  11 13
Sample Output 2:
99 99 101 101
*/

#include <iostream>
using namespace std;

int main()
{

    int b[(int)1e3][(int)1e3], n, m;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += b[j][i];
        }
        cout << sum << " ";
    }

    return 0;
}
