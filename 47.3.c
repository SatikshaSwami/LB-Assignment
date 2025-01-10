//Write application which accept file name from user and read all data from that file and display contents on screen.
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
  int fd = 0;
  char Name[30];
  char Arr[50] = {'\0'};

  printf("Enter the file name :\n");
  scanf("%[^'\n']s",Name);

  fd = open(Name,O_RDWR);

  if(fd == -1)
  {
      printf("unable to create file\n");
  }
  else
  {
    read(fd,Arr,25);
    printf("%s\n",Arr);

  }




  return 0;
}