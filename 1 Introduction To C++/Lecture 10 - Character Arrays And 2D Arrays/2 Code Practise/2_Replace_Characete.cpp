/*

Replace Character
Send Feedback
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)
Output Format :
Updated string
Note :
You don't need to output anything. Just implement the given function.
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd
*/

int findLength(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void replaceCharacter(char input[], char c1, char c2)
{
    int length = findLength(input);
    for (int i = 0; i < length; i++)
    {
        input[i] = input[i] == c1 ? c2 : input[i];
    }
}