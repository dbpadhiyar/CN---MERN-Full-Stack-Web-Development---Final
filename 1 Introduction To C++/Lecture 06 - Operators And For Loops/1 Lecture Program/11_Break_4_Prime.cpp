#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isDevided = false;
    for (int d = 2; d <= n / 2; d++)
    {
        if (n % d == 0)
        {
            isDevided = true;
            break;
        }
    }
    string result = isDevided == true ? "Not Prime" : "Prime";
    cout << result;
}