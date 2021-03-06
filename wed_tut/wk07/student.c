// introduction to struct pointers!
// why might you eventually want a struct pointer?
// - nodes in a linked list
// - make a dynamic number of the same struct
// - write funcitons to change structs (and return something else)

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 256

struct student {
  int zID;
  double wam;
  char name[MAX_NAME_LENGTH];
  // pointer to next (linked lists)
  // struct student *next;
};

int main(void) {
    // make a struct student, and a pointer to the student
    struct student stu;
    
    struct student *stu_ptr = &stu;
    
    // (*stu_ptr).zID = 5123456;
    // initialise the fields using a pointer to the struct
    // (in the future, we'll allocate the memory - with a new function!)
    stu_ptr->zID = 5123456;
    stu_ptr->wam = 74.7;
    strcpy(stu_ptr->name, "Frankie");
    
    
    
    // print out student info
    // changes made with the struct pointer are also in stu
    // stu_ptr->field could also be used
    printf("%s (z%d) has a wam of %lf\n", stu.name, stu.zID, stu.wam);
    
    /*
    strcpy(stu.name, "");
    printf("%s is the new student name\n", stu.name);
    
    int i = 0;
    while (i < 4) {
        printf("%c\n", stu.name[i]);
        i++;
    }
    */
    
    return 0;
}

