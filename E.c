#include "stdio.h"

void main()
{
 int rows;

 printf("Enter number of rows (odd) : ");
 scanf("%d", &rows);

 for (int i = 1; i <= rows; i++)
 {
  for (int j = 1; j <= rows - 1; j++)
  {
   if (i == 1 || i == (rows / 2) + 1 || i == rows || j == 1)
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