#include <stdio.h>
#include <stdlib.h>

int main()
{
  //追加
  printf("What is your name?\n");

  char name[20];
  printf(">");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  //
  
  printf("Rolling dice...\n");

  
  int x,y;
  int total;
  

  printf("Die 1: ");
  scanf("%d",&x);

  printf("Die 2: ");
  scanf("%d",&y);

  total = x + y;

  printf("Total value: %d\n",total);

  if(total > 7)
    {
      printf(" won!\n");
    }
  else
    {
      printf(" lose!\n");
    }
  
  
  
  return 0;
  
}
