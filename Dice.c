#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Rolling dice...\n");

  int x,y;
  int total;
  

  printf("Die 1: ");
  scanf("%d",&x);

  printf("Die 2: ");
  scanf("%d",&y);

  total = x + y;

  printf("Total value: %d\n",total);
  
  return 0;
  
}
