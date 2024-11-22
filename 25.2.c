//Accept number of rows and number of columns from user and display below pattern.

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i =0, j =0;

    for(i =0; i < iRow; i++)
    {
        for(j =0; j< iCol; j++)
        {
               if(i + j == iCol - 1)
             {
                printf("#\t");
             }
             else if(j >= 4 - i && j <= 4)
            {
                printf("@\t");
            }
            else 
            {
                printf("*\t");
            }
            
            

        }
        printf("\n");
    }

}
int main()
{
    int iValue1 =0, iValue2 =0;

    printf("Enter number of rows and columns :\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}