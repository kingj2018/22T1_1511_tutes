//

#include <stdio.h>

#define SIZE 7

void array_print(int length, int array[]);
void squares(int length, int array[]);

int main(void) {

    // TODO: declare some arrays, print them, and modify them
    int zeros[SIZE] = {0};
    
    int nums[SIZE] = {1, 1, 1, 1, 1, 1, 1};
    
    array_print(SIZE, zeros);
    
    printf("nums before squares:\n");
    array_print(SIZE, nums);
    
    squares(SIZE, nums);
    printf("nums after squares:\n");
    array_print(SIZE, nums);

    return 0;
}

// a function to print an array
void array_print(int length, int array[]) {
    int i = 0;
    while (i < length) {
        printf("%d\n", array[i]);
        i++;    
    }
}

// fills each element of the array with the square of its index
void squares(int length, int array[]) {
    int i = 0;
    while (i < length) {
        array[i] = i * i;
        i++;    
    }
}




