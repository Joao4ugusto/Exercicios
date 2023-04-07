#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int** generate_pascal_triangle(int numRows) {
    int** triangle = (int**) malloc(numRows * sizeof(int*));
    for (int i = 0; i < numRows; i++) {
        triangle[i] = (int*) malloc((i+1) * sizeof(int));
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
    }
    return triangle;
}

void print_triangle(int** triangle, int numRows) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

int main(){
	
	int numRows = 5;
    int** triangle = generate_pascal_triangle(numRows);
    print_triangle(triangle, numRows);
   

return 0;
}

