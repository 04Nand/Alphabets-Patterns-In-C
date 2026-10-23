#include "stdio.h"

void main()
{
 int rows;

 printf("Enter number of rows : ");
 scanf("%d", &rows);

 for (int i = 1; i <= rows; i++)
 {
  for (int j = 1; j <= rows; j++)
  {
   if ((i == 1 && j == 1) || i + j == rows + 1)
   {
    printf("  ");
   }

   else if (i == 1 || j == 1 || i == rows || j == rows || (i == rows - 1 && j == rows - 1) || (i == rows - 2 && j == rows - 2))
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