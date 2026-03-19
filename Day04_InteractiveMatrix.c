#include <stdio.h>

int main() {
    int rows, cols;
    int choice;
    // Defining maximum matrix size as 10x10 to prevent memory overflow
    int matrixA[10][10], matrixB[10][10], result[10][10];

    printf("--- Day 04: Interactive Matrix Calculator ---\n");
    
    // 1. Get matrix dimensions from the user
    printf("Enter the number of rows (max 10): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (max 10): ");
    scanf("%d", &cols);

    // 2. Read elements for Matrix A using nested for loops
    printf("\n--- Enter elements for Matrix A ---\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    // 3. Read elements for Matrix B using nested for loops
    printf("\n--- Enter elements for Matrix B ---\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // 4. Interactive Menu using do-while loop
    do {
        printf("\n--- Operation Menu ---\n");
        printf("1. Add Matrices\n");
        printf("2. Subtract Matrices\n");
        printf("3. Exit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nResult of Addition:\n");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result[i][j] = matrixA[i][j] + matrixB[i][j];
                    printf("%d\t", result[i][j]); // \t creates a neat tab space
                }
                printf("\n"); // Move to the next line after each row
            }
        } 
        else if (choice == 2) {
            printf("\nResult of Subtraction:\n");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result[i][j] = matrixA[i][j] - matrixB[i][j];
                    printf("%d\t", result[i][j]);
                }
                printf("\n");
            }
        } 
        else if (choice != 3) {
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);

    printf("Exiting calculator. See you on Day 5!\n");

    return 0;
}
