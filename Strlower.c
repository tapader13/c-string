#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    printf("Enter Any Number : ");
    gets(str);
    strupr(str);
    printf("%s", str);
}