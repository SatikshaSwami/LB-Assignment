// Accept character from user. If character is small display its corresponding capital character, and if it small then display its corresponding capital. In other cases display as it is.

#include<stdio.h>

void Display(char ch)
{
    
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c\n",ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("%c\n",ch);
    }
    else
    {

    }

    
    
}
int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}