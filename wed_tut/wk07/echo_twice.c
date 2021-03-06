// A program that uses fgets to take in a string from the user, 
// and then echo that value twice

#include <stdio.h>

#define SIZE 4096

int main(void) {
    // initialise string
    char word[SIZE];
    // {'h', 'e', 'l', 'l', 'o', '\0'}
    
    // stdin is our regular input (could change this to a .txt file you opened)
    // NULL is returned by fgets if it couldn't scan a string
    while (fgets(word, SIZE, stdin) != NULL) {
        // print the string
        printf("%s", word);
        printf("%s", word);
    }
    
    // TODO: use fgets to take in a string, then print it twice

    return 0;
}
