#include "stdio.h"

void main()
{
 int rows;

 printf("Enter number of rows : ");
 scanf("%d", &rows);

 for (int i = 1; i <= rows; i++)
 {

  for (int k = 1; k <= i; k++)
  {
   printf(" ");
  }

  for (int j = rows; j >= i; j--)
  {
   if (j == 1 || j == i || j == rows)
   {
    printf("* ");
   }

   else
   {
    printf("  ");
   }
  }

  printf("\n");
 }
}