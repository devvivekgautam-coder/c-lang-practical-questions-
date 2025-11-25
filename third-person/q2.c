#include <stdio.h>

int main () {
    int row, cols;
    int total = 0;
    float average = 0;

    printf("Enetr the number of rows : ");
    scanf("%d", &row);

    printf("Enter the number of cols : ");
    scanf("%d", &cols);

    int arry[row][cols];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter The Element of Array : ");
            scanf("%d", &arry[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            total = total + arry[i][j];
        }
    }
    printf("Total is : %d\n", total);

    average = (float)total / (row * cols);

    printf("Average is : %.2f", average);

    return 0;
}