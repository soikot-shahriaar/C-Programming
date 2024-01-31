// If an array contains n elements, then check if the given array is palindrome or not.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int isPalindrome = 1; // palindrome

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome)
        printf("palindrome\n");
    else
        printf("NOT a palindrome\n");

    return 0;
}
