/*
    Binary to decimal


    Given a binary number as an integer N, convert it into decimal and print.

    Input format :
            An integer N in the Binary Format

    Output format :
            Corresponding Decimal number (as integer)

    Constraints :
            0 <= N <= 10^9

    Sample Input 1 :
            1100

    Sample Output 1 :
            12

    Sample Input 2 :
            111

    Sample Output 2 :
            7
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int power = 0;
    int total = 0;
    int finaltotal = 0;
    while (n != 0)
    {
        int reminder = n % 10;
        reminder = reminder * pow(2, power);
        finaltotal += reminder;
        power++;
        n = n / 10;
    }
    cout << finaltotal;
}