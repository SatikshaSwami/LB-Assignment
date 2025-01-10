//Write application which accept file name from user and open that file in read mode.
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
  int fd = 0;
  char Name[30];

  printf("Enter the file name :\n");
  scanf("%[^'\n']s",Name);

  fd = open(Name,O_RDONLY);

  if(fd == -1)
  {
      printf("unable to open file\n");
  }
  else
  {
    printf("File opened successfully\n");
  }




  return 0;
}