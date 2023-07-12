#include <iostream>

using namespace std;

int main()
{
    float Fahrenheit;
    cout << "Enter Fahrenheit value" << endl;
    cin >> Fahrenheit;

    float celsius;
    celsius = (Fahrenheit - 32) / 1.80;

    cout << "Celsius value for " << Fahrenheit << " is " << celsius;
}