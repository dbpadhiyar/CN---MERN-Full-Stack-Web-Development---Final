/*
    Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.

    1, if the character is an uppercase alphabet (A - Z)
    0, if the character is a lowercase alphabet (a - z)
    -1, if the character is not an alphabet

*/

#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    int result = c >= 65 && c <= 90 ? 1 : c >= 97 && c <= 122 ? 0
                                                              : -1;

    cout << result;
}