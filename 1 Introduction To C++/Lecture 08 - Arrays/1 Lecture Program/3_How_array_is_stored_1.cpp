#include <iostream>
using namespace std;

// Pass array in function
void PrintArray(int input[], int n)
{
    cout << "Size of N is => " << n << endl;
    cout << endl
         << "Print Array Started"
         << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array";
    cin >> n;

    int input[100];

    cout << "Default array Address " << input << endl;

    cout << "Enter The Array Elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cout << endl;
    PrintArray(input, n);
}