#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter Value of A" << endl;
    cin >> a;
    cout << "Enter Value of B" << endl;
    cin >> b;
    cout << "Enter Value of C" << endl;
    cin >> c;

    bool isValid = false;
    bool isAuthorized = true;

    if (a > b && a > c)
        cout << "A is Greater than b and c" << endl;
    else
        cout << "A is not grater than b and c" << endl;

    if (a > b || a > c)
        cout << "A is Greater than b or c or both" << endl;
    else
        cout << "A is not Greater than b or c or both" << endl;

    if (!isValid)
        cout << "Valid" << endl;
    else
        cout << "Not Valid" << endl;
}