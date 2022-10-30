#include <stdio.h>
int main()
{
 int i = 1;
 while (i <= 2) //outer loop; Flat main Door
 {
   printf("Flat no:%d\n", i);
       int j = 1;
       while (j <= 5) //inner loop;  Flat rooms
       {
          printf("\tRoom no:%d\n", j);
          j++; //j = j+1;
       } 
   i++; //i=i+1;
 }
}
