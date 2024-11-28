//Accept division of student from user and depends on the division display exam timing. There are 4 division in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30AM, C at 9.20AM and D at 10.30 AM.

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
     if(chDiv == 'A' || chDiv == 'a')
     {
        printf("Your exam at 7.00 AM");
     }
     else if(chDiv == 'B' || chDiv == 'b')
     {
        printf("Your exam at 8.30 AM");
     }

     else if(chDiv == 'C' || chDiv == 'c')
     {
        printf("Your exam at 9.20 AM");
     }
     else if(chDiv == 'D' || chDiv == 'd')
     {
        printf("Your exam at 10.30 AM");  
     }
     else
     {
        printf("Invalid");
     }

        
           
    } 
       

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

     DisplaySchedule(cValue);

   

    return 0;
}