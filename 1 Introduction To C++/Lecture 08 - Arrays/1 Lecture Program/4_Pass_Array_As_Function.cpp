#include <iostream>
using namespace std;

void PrintArray(int input[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Value at index " << i << " is => " << input[i] << endl;
    }
    cout << endl;
}

void increment(int a, int b[], int c)
{
    a++;
    b[0] += 5;
}

void ExchangeArrayValue(int c[], int n)
{
    int start = 0, end = n - 1;
    for (int i = 0; i < n; i++)
    {
        while (start < end)
        {
            int temp = c[start];
            c[start] = c[end];
            c[end] = temp;
            start++;
            end--;
        }
    }
}

int main()
{
    int input[] = {1, 2, 3};
    int input2[3] = {1, 2, 3};
    int input3[10] = {1, 2, 3};

    int SizeOfArray = sizeof(input3) / sizeof(input3[0]);
    cout << endl;

    PrintArray(input3, 10);

    int NewArray[5] = {1, 2, 3, 4, 5};
    int a = 10;
    increment(a, NewArray, 5);

    cout << "New value after the exchange";

    int ExchangeArray[5] = {1, 2, 3, 4, 5};

    ExchangeArrayValue(ExchangeArray, 5);

    cout << endl;
    int SizeOfExchangeArray = sizeof(ExchangeArray) / sizeof(ExchangeArray[0]);
    for (int i = 0; i < SizeOfExchangeArray; i++)
    {
        cout << "Value at " << i << " is => " << ExchangeArray[i] << endl;
    }
}