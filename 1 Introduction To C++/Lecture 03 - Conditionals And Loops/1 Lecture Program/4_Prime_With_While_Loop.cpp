#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter Number to find number is prime or not" << endl;
    cin >> number;
    bool divided = false;

    int divider = 2;

    while (divider <= number / 2)
    {
        if (number % divider == 0)
        {
            cout << number << " is Not Prime because it can divided by " << divider << endl;
            divided = true;
        }
        divider = divider + 1;
    }
    if (!divided)
    {
        cout << number << " is Prime number";
    }
}