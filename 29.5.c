//Write a program which accept string from user reverse that string in place.

#include<stdio.h>

void StrRevX(char *str)
{
    char *p = str;
    
    while(*p != '\0')
    {
        p++;
        
    }
    p--;

    while(p >= str)
    {
       printf("%c",*p);
         p--;
        
    }
  
    
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);


   StrRevX(Arr);

    return 0;
}