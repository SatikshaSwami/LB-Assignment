// Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from  0 to 255.
remaining
#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    char ch = 'a';
    
    for (iCnt =0 ; iCnt<=255; iCnt++)
    {
        printf("%c\n \t %d\n \t %o\n \t %x\n \t",iCnt);
    }

}
int main()
{
    DisplayASCII();

    return 0;
}