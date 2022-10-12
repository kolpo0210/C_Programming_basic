#include <stdio.h>

int main()
{
 for (int i=1; i<=2; i++)//outer loop
 {
  printf("Outer Loop:%d\n", i);
  for(int j=1; j<=5; j++)//inner loop
  {
    printf("\t%d\n", j);
   // j++;
  }
  //i++;
 }
}
