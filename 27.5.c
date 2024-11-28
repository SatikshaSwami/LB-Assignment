//Write a program which accept string from user and display it in reverse order.

#include<stdio.h>

void Reverse(char *str)
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
    
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

   Reverse(Arr);

    return 0;
}