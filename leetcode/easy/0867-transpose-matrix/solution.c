#include <stdio.h>
#include <stdlib.h>

int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int m = matrixSize;
    int n = matrixColSize[0];

    *returnSize = n;
    *returnColumnSizes = (int*)malloc(n * sizeof(int));

    int** ans = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        (*returnColumnSizes)[i] = m;
        ans[i] = (int*)malloc(m * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ans[j][i] = matrix[i][j];
        }
    }

    return ans;
}