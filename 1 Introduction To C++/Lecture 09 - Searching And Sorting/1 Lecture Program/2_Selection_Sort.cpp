/*
    Using selection sort we have to arrangr number in assending order

    After every round we should able to sort one new index

    input : [14, 3, 7, 9, 1, 12, 4]
   output : [1, 3, 4, 7, 9, 12, 14]
*/
#include <iostream>
#include <climits>
using namespace std;

void SelectionSort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int lowest = arr[i];
        for (int j = i; j < size; j++)
        {
            if (arr[j] < lowest)
            {
                lowest = arr[j];
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    int size;
    cin >> size;

    int input[100];

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    SelectionSort(input, size);

    for (int i = 0; i < size; i++)
    {
        cout << input[i] << ' ';
    }
}