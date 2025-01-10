//Write application which accept file name from user and create that file.
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
  int fd = 0;
  char Name[30];

  printf("Enter the file name :\n");
  scanf("%[^'\n']s",Name);

  fd = creat(Name,0777);

  if(fd == -1)
  {
      printf("unable to create file\n");
  }
  else
  {
    printf("File created successfully\n");
  }




  return 0;
}