#include <iostream>

using namespace std;

int main()
{
    cout << 'D' + 1 << endl;

    /*
         When you add a character and an integer, answer is also an integer.
         It will add the ASCII value of  char ‘D’ i.e 68  and int 1. So answer will be 69.
    */

    int i = 'd';
    cout << i << endl;
    /*
        When we put char 'd' into an integer,
        its associated ASCII value will be put in the integer i.e. 100.
    */

    char c = 74;
    cout << c << endl;

    /*  When we assign an integer to a character variable,
        that integer will be treated as ASCII value of corresponding character. 74 is ASCII value of letter 'J'.
         Hence, 'J' will be printed.
    */

    int a = 10;
    char ch = 'a';
    ch = ch + a;
    cout << ch << endl;

    /*
        We know that the addition of a character and an integer leads to an integer.
        So the statement - "ch + a" will give the answer 107(ASCII value of 'a' is 97).
        But we are assigning this integer now to the character variable.
        Hence, 107 will be saved in the variable "ch" and on printing it will print the character which is having ASCII value 107 i.e.'k'.
    */

    /*
     => Example
    */

    int j = 111;
    char cc = j;
    cout << cc << endl;

    char ab = '0';
    int l = ab;
    cout << l << endl;

    /*
        => Practise 1
    */
    cout << endl;
    int y = 10;
    char z = 'a';

    int o = y + z;  // 10 + 97 => 107
    char d = y + z; // 10 + 97 in ASCII => k
    cout << o << endl;
    cout << d << endl;

    /*
        => Practise 2
    */
    cout << endl;
    int w;
    char x;
    w = 33333; // (10000010-00110101) (130-53)  last byte will be stored when we try to convert int to char and
               // int value use more than 1 byte
               // in some of cases it will ? it's either ? or useless chracter
    x = w;
    cout << x << endl;

    x = '0';
    w = x;
    cout << w << endl; // 48

    float f = 1.2;
    w = f;
    cout << w << endl;
}