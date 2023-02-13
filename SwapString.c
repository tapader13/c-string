#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter any string : ");
    gets(str1);
    printf("Enter any string : ");
    gets(str2);
    char temp[20];
    printf("Before swap str1=%s\n", str1);
    printf("Before swap str2=%s\n", str2);
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    printf("After swap str1=%s\n", str1);
    printf("After swap str2=%s\n", str2);
}