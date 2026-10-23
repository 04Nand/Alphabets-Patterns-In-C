#include "stdio.h"

void main()
{
 int rows;

 printf("Enter number of rows (odd) : ");
 scanf("%d", &rows);

 int mid = rows / 2, mid_add_on = rows / 2 + 1;

 for (int i = 1; i <= rows; i++)
 {
  for (int j = 1; j <= rows; j++)
  {
   if (j == 1 || j == rows || (i == j && i >= mid_add_on) || (i + j == rows + 1 && i >= mid_add_on))
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