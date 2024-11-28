//Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly.

#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;
    if(ch)
    {
         for(iCnt = ch; iCnt <= 'Z'; iCnt++)
    {
        printf("%c\t",iCnt);
    } 

    for(iCnt = ch; iCnt >= 'a'; iCnt--)
    {
        printf("%c\t",iCnt);
    }

    }
    else
    {
        return;
    }
   

    
   
    
}
int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}