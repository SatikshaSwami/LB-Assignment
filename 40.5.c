//Write a recursive program which display below pattern
#include<stdio.h>

void Display()
{
   static char ch = 'a';

    if(ch <= 'f')
    {
        printf("%c\t",ch);
         ch++;
         Display();
    }
}
int main()
{
    Display();


    return 0;
}