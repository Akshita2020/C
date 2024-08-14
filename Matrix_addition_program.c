/*Include the necessary header file stdio.h for input and output functions.
Declare variables to store the number of rows and columns of the matrices.
Prompt the user to enter the number of rows and columns.
Declare three matrices: matrix1, matrix2, and result, each with dimensions rows x cols.
Input the elements of the first matrix and the second matrix using nested loops.
Perform matrix addition by iterating through the matrices and adding corresponding elements, storing the result in the result matrix.
Display the result matrix. */


#include <stdio.h>
int main() {
    int rows, cols;

    // Prompting user to enter the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declaring matrices
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Taking elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Taking elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Performing matrix addition
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the result matrix
    printf("Addition of Matrix1 and Matrix2 is:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
