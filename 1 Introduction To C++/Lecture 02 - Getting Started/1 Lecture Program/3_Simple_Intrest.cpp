#include <iostream>
using namespace std;

int main()
{
    float si;
    int principalMoney = 100000;
    float rate = 6.5;
    int time = 2;

    si = principalMoney * rate * time / 100;

    cout << "Intrest Rate on " << principalMoney << " on rate of " << rate << " for time of " << time << " is =>" << si;
}