#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int** createTable(int elementCount, int target) {
    int** table = (int**)malloc(sizeof(int*)*elementCount);
    for (int i = 0; i < elementCount; i++) {
        int* row = (int*)malloc( sizeof(int) * (target+1) );
        row[0] = 1;
        for (int j = 1; j < (target+1); j++) {
            row[j] = 0;
        }
        table[i] = row;
    }

    return table;
}

void printTable(int** table, int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < (target + 1) ; j++) {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // int* set1 = {1, 2, 3, 4, 5, 6};
    int size1 = 6;
    int target1 = 7;
    int** table1 = createTable(size1, target1);
    printTable(table1, size1, target1);
    
    return 0;
}