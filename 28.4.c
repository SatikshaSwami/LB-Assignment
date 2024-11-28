//Write a program which accept string from user and display only digits from that string.

#include<stdio.h>

void DisplayDigit(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c",str[i]);
        }
        i++;
    }
   
}
int main()
{
    char Arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

   DisplayDigit(Arr);

    

    return 0;
}