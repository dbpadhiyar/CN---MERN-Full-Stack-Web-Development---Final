#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 5;

    int c = ++a; // ++a will increase value first then it will print
    int d = b++; // a++ will print current value but it will also increase by one

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
}