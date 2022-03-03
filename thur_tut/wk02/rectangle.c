// takes in the side lengths of a rectangle and prints out the resulting area
// wk02 tutorial

#include <stdio.h>

int main (void) {

    // TODO: take in width and height, and calculate rectangle area
    int width;
    int height;
    
    int area;
    
    printf("Enter width: ");
    scanf("%d", &width);
    
    printf("Enter height: ");
    scanf("%d", &height);
    
    if (width <= 0 || height <= 0) {
        printf("One of the rectangle dimensions is non-positive\n");
    } else {
        area = width * height;
        
        printf("Our rectangle is %d by %d and its area is %d squared\n", width, height, area);
    }
    
    return 0;
}
