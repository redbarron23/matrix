// https://stackoverflow.com/questions/8617683/return-a-2d-array-from-a-function

#include <iostream>


const int MATRIX_SIZE = 4;

// create an array of N X N
int** create2DArray(unsigned row, unsigned col) {
     int** array2D = 0;
     array2D = new int*[row];

     for (int i = 0; i < row; i++) {
          array2D[i] = new int[col];

          for (int j = 0; j < col; j++) {
               array2D[i][j] = j + col * i;
          }
     }

     return array2D;
}

int main () {

    printf("Creating a 2D array2D\n");
    printf("\n");

    int row = MATRIX_SIZE;
    int col = MATRIX_SIZE;
    int** my2DArray = create2DArray(row, col);
    printf("Array sized [%i,%i] created.\n\n", row, col);

    // print contents of the array2D
    printf("Array contents: \n");

    for (int h = 0; h < row; h++) {
         for (int w = 0; w < col; w++) {
              printf("%i,", my2DArray[h][w]);
         }
         printf("\n");
    }

    return 0;
}


