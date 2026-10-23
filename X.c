#include "stdio.h"

void main()
{
 int rows;

 printf("Enter number of rows (odd) : ");
 scanf("%d", &rows);

 for (int i = 1; i <= rows; i++)
 {
  for (int j = 1; j <= rows; j++)
  {
   if (i == j || i + j == rows + 1)
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