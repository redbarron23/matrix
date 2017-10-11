// https://stackoverflow.com/questions/8617683/return-a-2d-array-from-a-function

#include <iostream>

int** create2DArray(unsigned row, unsigned col)
{
     int** array2D = 0;
     array2D = new int*[row];

     for (int h = 0; h < row; h++)
     {
          array2D[h] = new int[col];

          for (int w = 0; w < col; w++)
          {
               // fill in some initial values
               // (filling in zeros would be more logic, but this is just for the example)
               array2D[h][w] = w + col * h;
          }
     }

     return array2D;
}

int main ()
{

    printf("Creating a 2D array2D\n");
    printf("\n");

    int row = 4;
    int col = 4;
    int** my2DArray = create2DArray(row, col);
    printf("Array sized [%i,%i] created.\n\n", row, col);

    // print contents of the array2D
    printf("Array contents: \n");

    for (int h = 0; h < row; h++)
    {
         for (int w = 0; w < col; w++)
         {
              printf("%i,", my2DArray[h][w]);
         }
         printf("\n");
    }

    return 0;
}


