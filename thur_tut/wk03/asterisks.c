// Using while loops to draw patterns with asterisks
// Tutorial week 3, COMP1511

#include <stdio.h>

int main (void) {

    int size;
    
    printf("Enter size: ");
    scanf("%d", &size);
    
    int row = 0;
    while (row < size) {
        int col = 0;
        while (col < size) {
            if (col > row) {
                printf("-");
            } else {
                printf("*");
            }
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}
