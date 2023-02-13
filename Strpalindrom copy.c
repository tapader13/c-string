#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    printf("Enter any String : ");
    gets(str1);
    char str2[20];
    int i = 0, length = 0, j;
    while (str1[i] != '\0')
    {
        i++;
        length++;
    }
    for (j = 0, i = length - 1; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }
    int d = strcmp(str1, str2);
    if (d == 0)
    {
        printf("palindrom");
    }
    else
    {
        printf("not palindrom");
    }
}