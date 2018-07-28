# bin-record-reading-from-file
Universal binary record and reading from a file.
 
## What purpose?
    The task is to write and read structures, classes, arrays from a binary file

## How I can use this?
+ Examples:
    * For structures:
    ```C++
    #include "binRecRead.h"
    #include <stdlib.h>
    struct Person
    {
        int age;
        int height;
    };
    int main()
    {
        size_t size = sizeof(struct Person);

        struct Person* person = (struct Person*) malloc(size);
        person->age = 18;
        person->height = 181; 
        binWrite("person.bin", (char*)person, size); 
        free(person);
        
        struct Person* clone = (struct Person*) malloc(size);
        binLoad("person.bin", (char*)clone, size);
        printf("Age: %d\nHeight: %d\n", clone->age, clone->height);
        free(clone);
        return 0;
    }
    ```
