//Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
#include<stdio.h>

void Display(char ch)
{
   printf("ASCII value in decimal : %d\n",ch);
   printf("ASCII value in Octal : %o\n",ch);
   printf("ASCII value in hexadecimal : %x\n",ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}