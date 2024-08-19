#include <assert.h>

void multiplyMatrices(int rowA, int colA, int rowB, int colB, int A[rowA][colA], int B[rowB][colB], int C[rowA][colB]);

void test_multiplication() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int C[2][2];
    int expected[2][2] = {{58, 64}, {139, 154}};

    multiplyMatrices(2, 3, 3, 2, A, B, C);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            assert(C[i][j] == expected[i][j]);
        }
    }

    printf("All tests passed!\n");
}

int main() {
    test_multiplication();
    return 0;
}
