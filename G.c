#include "stdio.h"

void main()
{
 int rows;

 printf("Enter number of rows : ");
 scanf("%d", &rows);

 int middle = rows / 2 + 1;

 for (int i = 1; i <= rows; i++)
 {
  for (int j = 1; j <= rows; j++)
  {
   if ((i == 1 && j == 1) || (i == rows && j == 1) || (i == rows && j == rows))
   {
    printf("  ");
   }

   else if (i == 1 || i == rows || j == 1 || (i == middle && j > middle) || (i > middle && j == rows))

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