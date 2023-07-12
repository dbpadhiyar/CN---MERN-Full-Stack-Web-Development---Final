/*
Trim Spaces
Send Feedback
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
Input Format :
 String S
Output Format :
Updated string
Constraints :
1 <= Length of string S <= 10^6
Sample Input :
abc def g hi
Sample Output :
abcdefghi
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