//
//  main.c
//  c fundamentals
//
//  Created by NamH on 26/11/2020.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int col, row;

    printf("So dong: ");
    scanf("%d", &row);
    printf("So cot: ");
    scanf("%d", &col);

    int a[row][col];

    printf("Nhap gia tri ma tran:\n");

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Nhap vao a[%d,%d] = ", i+1, j+1);
            scanf("%d", & a[i][j]);
        }
    }

    printf("==================\n");
    printf("Mang da nhap\n");

    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d,%d]= %d\t", i+1, j+1, a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }

    printf("tong = %d\n", sum);

    // Assume min is the first element
    int min = a[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (min > a[i][j]) {
                min = a[i][j];
            }
        }
    }

    printf("min = %d", min);
    printf("\n");

    return 0;
}
