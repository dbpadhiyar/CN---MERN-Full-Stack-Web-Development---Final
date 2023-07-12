/*
    Check Palindrome
Send Feedback
Given a string, determine if it is a palindrome, considering only alphanumeric characters.
Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.
Example:
If the input string happens to be, "malayalam" then as we see that this word can be read the same as forward and backwards, it is said to be a valid palindrome.

The expected output for this example will print, 'true'.
From that being said, you are required to return a boolean value from the function that has been asked to implement.
Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.
Output Format:
The only line of output prints either 'true' or 'false'.
Note:
You are not required to print anything. It has already been taken care of.
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1 :
abcdcba
Sample Output 1 :
true
Sample Input 2:
coding
Sample Output 2:
false
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

bool checkPalindrome(char str[])
{
    int length = findLength(str);
    int start = 0;
    int end = length - 1;
    bool isPalindrome = true;
    for (int j = 0; j < length; j++)
    {
        if (str[start] == str[end] || start == end)
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }
}
