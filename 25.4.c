//Accept number of rows and number of columns from user and display below pattern.

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i =0, j =0;

    for(i =1; i <= iRow; i++)
    {
        for(j =1; j<= iCol; j++)
        {
            
           
            if(j == 1 || j == iCol || i == 1 || i == iRow || i + j == iRow + 1)
            {
                printf("*\t");
            }
            else if(i ==2 || j <=2 || i==3)
            {
                printf("#\t");
            }
            
            else 
            {
                printf("$\t");
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

