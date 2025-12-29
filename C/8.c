#include <stdio.h>

int main()
{
   int arr[5][5] = {
       {10, 20, 30, 40, 50},
       {100, 200, 300, 400, 500},
       {101, 102, 103, 104, 105}};

   int row = sizeof(arr) / sizeof(arr[0]);
   int col = sizeof(arr[0]) / sizeof(arr[0][0]);

   arr[2][2]=1001;

   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }
}