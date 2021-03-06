#include <stdio.h>

#define SIZE 128
 
int main(void) {
    char string[SIZE] = "";
    char c;
    int chars_read = 0;
    
    while (scanf("%c", &c) != EOF) {
        string[chars_read] = c;
        // increment chars_read
        chars_read++;
    }
    // null terminate the string
    string[chars_read] = '\0';
    printf("Read in %d chars for the string: %s", chars_read, string);
    
    return 0;
}
