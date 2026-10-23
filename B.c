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
   if ((i == 1 && j == rows) || (i == rows && j == rows))
   {
    printf("  ");
   }

   else if (i == (rows / 2) + 1 || j == 1 || i == 1 || i == rows || j == rows)
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