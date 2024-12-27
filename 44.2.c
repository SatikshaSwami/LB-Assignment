//Write a program which search last occurrence of particular element from singly linear linked list. function should return position at which element is found.

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
  PNODE newn = NULL;

  newn = (PNODE)malloc(sizeof(NODE));

  newn->data = no;
  newn->next = NULL;

  if(*head == NULL)
  {
    *head = newn;
  }
  else
  {
    newn->next = *head;
    *head = newn;

  }
}

void Display(PNODE head)
{
  while(head != NULL)
  {
    printf("| %d |->",head->data);
    head = head->next;
  }
  printf("NULL\n");
}

int SearchLastOcc(PNODE head, int no)
{
  int position = 0;
  int lastPos = 0;

  while(head != NULL)
  {
    position++;
    if(head ->data == no)
    {
      lastPos = position;
    }
    head = head->next;
  } 
  return lastPos;
}


int main()
{
  PNODE first = NULL;
  int iRet = 0;
  int iValue = 0;

  InsertFirst(&first, 70);
  InsertFirst(&first, 30);
  InsertFirst(&first, 50);
  InsertFirst(&first, 40);
  InsertFirst(&first, 30);
  InsertFirst(&first, 20);
  InsertFirst(&first, 10);

  Display(first);


  printf("Enter the element :\n");
  scanf("%d",&iValue);

iRet = SearchLastOcc(first, iValue);
printf("No. of elements are :%d\n",iRet);



  return 0;
}