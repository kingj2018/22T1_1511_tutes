// Testing out some broken while loops
// this program is specifically to discuss some loops, and how to fix them
// Tutorial week 3, COMP1511

#include <stdio.h>

int main (void) {

    /*
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    */
    
    /*
    // important steps for a while loop:
    // 1. initialise variables (e.g. counter)
    int count = 0;
    // 2. while (<condition>) {
    while (count < 10) {
        // do stuff
        printf("Hello\n");
        // 3. increment counter/change flags
        count++; // or count = count + 1;
    }
    */
    
    // error: i isn't given a value initially
    // soln: initialise i to 0 (int i = 0;)
    /*
    int i;

    while (i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }
    */
    
    // issue: j = 1 is a variable assignment, that always evaluates as 1 (true)
    // so gets caught in an infinite loop
    /*
    int i = 0;
    int j = 0;

    while (j = 1 || i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }
    */
    
    //
    /*
    int i = 0;
    int n = 10;

    while (i < n) {
        printf("%d\n", i);
        n = n + i;
        i = i + 1;
    }
    */
    
    // issue: braces are missing
    /*
    int i = 0;

    while (i < 10)
        printf("%d\n", i);
        i = i + 1; // never reaching this increment
    */

    return 0;
}
