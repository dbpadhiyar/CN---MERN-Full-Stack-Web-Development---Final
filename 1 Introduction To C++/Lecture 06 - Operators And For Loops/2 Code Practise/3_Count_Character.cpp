/*

Count Characters

Write a program to count and print the total number of characters
        => (lowercase english alphabets only),
        => digits (0 to 9)
        => and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.

        That is, input will be a stream of characters and you need to consider all the
        characters which are entered till '$'.

    Print count of characters, count of digits and count of white spaces respectively (separated by space).

    Input Format :
        A stream of characters terminated by '$'

    Output Format :
        3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)

    Sample Input :
        abc def4 5$

    Sample Output :
        6 2 2

*/

#include <iostream>
using namespace std;

int main()
{
    char c;
    c = cin.get();

    int characterCount = 0, digitCount = 0, spaceCount = 0;

    while (c != '$')
    {
        int i = c;
        if (i >= 48 && i <= 57)
            digitCount++;
        else if (i >= 97 && i <= 122)
            characterCount++;
        else if (i == 32 || i == 9 || i == 10)
        {
            spaceCount++;
        }
        c = cin.get();
    }

    cout << characterCount << " " << digitCount << " " << spaceCount;
}