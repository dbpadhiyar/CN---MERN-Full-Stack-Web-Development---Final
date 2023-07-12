#include <iostream>

using namespace std;

int main()
{
    // In C++, all variables contain garbage values before their initialisation.

    int a = 10; // 4 BYTES
    int b = 25;
    int sum = a + b;
    cout << "Total of a and b is => " << sum << endl;

    char c = 'D'; // for char print '' && for string print ""
    cout << "Value of c is => " << c << endl;

    float f = 10.25; // 4 BYTES
    cout << "value of f is => " << f << endl;

    double d = 255.7887; // 8 BYTES
    cout << "value of d is => " << d << endl;

    bool isValid = true;
    cout << "Your Passport is => " << isValid << endl;

    long l = 121248451;
    cout << "value of l is => " << l << endl;

    cout << "size of int is => " << sizeof(a) << " Bytes" << endl;
    cout << "size of char is => " << sizeof(c) << " Bytes" << endl;
    cout << "size of float is => " << sizeof(f) << " Bytes" << endl;
    cout << "size of double is => " << sizeof(d) << " Bytes" << endl;
    cout << "size of bool is => " << sizeof(isValid) << " Bytes" << endl;
    cout << "size of Long is =>" << sizeof(l) << "Bytes" << endl;
    return 0;
}