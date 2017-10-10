#include <iostream>

const int MATRIX_SIZE = 4;

/*
int main() {
    std::cout << "Hello World" << std::endl;
}
*/


void printMatrix(int m[MATRIX_SIZE][MATRIX_SIZE]) {
    for (int i = 0; i < MATRIX_SIZE; ++i) {
        for (int j = 0; j < MATRIX_SIZE; ++j) {
            std::cout <<  m[i][j]  << " ";
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
        int m[MATRIX_SIZE][MATRIX_SIZE];
        int count = 0;
        int level = 0;
        int last = MATRIX_SIZE - 1;
        int totNumOfLevels = MATRIX_SIZE / 2;

        for (int i = 0; i < MATRIX_SIZE; ++i) {
            for (int j = 0; j < MATRIX_SIZE; ++j) {
                m[i][j] = count++;
            }

         }

        std::cout << "------------------- Original Matrix --------------" << std::endl;
        printMatrix(m);

        while (level < totNumOfLevels) {
            for (int i = 0; i < last; ++i) {
                Swap(m[level][i], m[i][last]);
                Swap(m[level][i], m[last][last - i + level]);
                Swap(m[level][i], m[last -i + level][level]);
            }
            ++level;
            --last;
        }

        std::cout << "-------------- Rotated Matrix ----------------" << std::endl;
        printMatrix(m);
}
