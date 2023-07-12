#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter Value of a" << endl;
    cout << "Enter Value of b" << endl;
    cin >> a >> b;

    bool isEqual = a == b;
    cout << "are a and b Equal " << isEqual << endl;

    bool is_A_Bigger = (a > b);
    cout << "Is A Bigger than b " << is_A_Bigger << endl;

    bool is_A_Bigger_Or_Equal = (a >= b);
    cout << "Is A Bigger than or equal to b " << is_A_Bigger_Or_Equal << endl;

    bool isNotEqual = a != b;
    cout << "are a and b not Equal " << isNotEqual << endl;

    bool is_A_Lesser = (a < b);
    cout << "Is A Lesser than b " << is_A_Lesser << endl;

    bool is_A_Lesser_Or_Equal = (a <= b);
    cout << "Is A Lesser than or equal to b " << is_A_Lesser_Or_Equal << endl;
}