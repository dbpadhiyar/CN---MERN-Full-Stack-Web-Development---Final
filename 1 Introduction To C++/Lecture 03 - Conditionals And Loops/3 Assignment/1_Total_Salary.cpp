/*
   Write a program to calculate the total salary of a person.

   The user has to enter the basic salary (an integer) and the grade (an uppercase character),
   and depending upon which the total salary is calculated as -

   totalSalary = basic + hra + da + allow – pf

   WHERE

        hra   = 20% of basic
        da    = 50% of basic
        allow = 1700 if grade = ‘A’
        allow = 1500 if grade = ‘B’
        allow = 1300 if grade = ‘C' or any other character
        pf    = 11% of basic.

        Round off the total salary and then print the integral part only.

        Input format :
            Basic salary & Grade (separated by space)

        Output Format :
            Total Salary

        Constraints :
            0 <= Basic Salary <= 7,500,000

        Sample Input 1 :
            10000 A

        Sample Output 1 :
            17600

        Sample Input 2 :
            4567 B

        Sample Output 2 :
            8762
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double basic;
    cin >> basic;
    char c;
    cin >> c;

    double hra, allow, da, pf = 0;

    hra = basic * 20 / 100;
    da = basic * 50 / 100;
    allow = c == 'A' ? 1700 : c == 'B' ? 1500
                                       : 1300;
    pf = basic * 11 / 100;

    double totalSalary = basic + hra + da + allow - pf;
    int ans = round(totalSalary);
    cout << ans;
}