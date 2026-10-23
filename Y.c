#include "stdio.h"

void main()
{
 int rows;

 printf("Enter number of rows (odd) : ");
 scanf("%d", &rows);

 int mid = rows / 2;

 for (int i = 1; i <= rows; i++)
 {
  for (int j = 1; j <= rows; j++)
  {
   if ((i == j && i <= mid + 1) || (i + j == rows + 1 && i <= mid + 1) || (i > mid + 1 && j == mid + 1))
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