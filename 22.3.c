//Accept number of rows and number of columns from user and display below pattern.

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i =0, j =0;
    char ch = 'a';

    for( ch ='a',i =1 ; i <= iRow;ch++, i++)
    {
        for( ch ='a',j =1; j <= iCol;  ch++,j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch);
            }
            else
            {
                printf("%d\t",j);
            }

        }
        printf("\n");
    }


}
int main()
{
    int iValue1 =0, iValue2 = 0;

    printf("Enter number of rows and columns :\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);


    return 0;
}