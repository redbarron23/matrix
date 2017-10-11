#include<iostream>

// change this to increase or decrease the size of the 2D Array
const int MATRIX_SIZE = 4;

void passing(int a[][MATRIX_SIZE], int r, int c) {
	int count = 0;
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			a[i][j] = count++;
		}
	}
}

void printMatrix(int m[MATRIX_SIZE][MATRIX_SIZE]) {
    for (int i = 0; i < MATRIX_SIZE; ++i) {
        for (int j = 0; j < MATRIX_SIZE; ++j) {
            std::cout <<  m[i][j]  << " ";
            if (m[i][j] < 10) std::cout << "      ";   // 6 spaces
            else if (m[i][j] < 100) std::cout << "     "; // 5 spaces
            else std::cout << "    ";                     // 4 spaces
        }
        std::cout << std::endl;
    }
}

void Swap(int& i, int& j) {
    int temp = i;
    i = j;
    j = temp;
}

int main() {
	// create array on the heap
	int sarr[MATRIX_SIZE][MATRIX_SIZE];

	int row = MATRIX_SIZE;
	int col = MATRIX_SIZE;

	int level = 0;
	int last = MATRIX_SIZE - 1;
	int totNumOfLevels = MATRIX_SIZE / 2;

	// pass in array and parametres to fill array
	passing(sarr, row, col);

	// print array
	std::cout << "----------------Original Matrix --------------" << std::endl;
    printMatrix(sarr);

    while (level < totNumOfLevels) {
    	for (int i = level; i < last; ++i) {
        	Swap(sarr[level][i], sarr[i][last]);
        	Swap(sarr[level][i], sarr[last][last - i + level]);
        	Swap(sarr[level][i], sarr[last -i + level][level]);
        }
        ++level;
        --last;
    }

	printf("\n");
	printf("\n");

	 std::cout << "-------------- Rotated Matrix ----------------" << std::endl;
	 printMatrix(sarr);

}
