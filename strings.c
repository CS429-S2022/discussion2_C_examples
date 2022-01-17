#include <string.h>
#include <stdlib.h>
#include "string.h"

/****************************************
 * This series of tasks is meant to
 * help you better understand how strings
 * and the string.h library work in C. 
 * Given the skeleton code, your task is 
 * to fix or finish the code to provide 
 * the desired output.
 ****************************************/


/***************************************
 * Make buffer store the string "CS429". 
 * The given example is missing a null
 * terminator, which you need to fix.
 ***************************************/
void strings_task_1(char *buffer) {

    buffer[0] = 'C';
    buffer[1] = 'S';
    buffer[2] = '4';
    buffer[3] = '2';
    buffer[4] = '9';

    // TODO: Replace this with your code.
    
}

/***************************************
 * Use the toupper() standard library
 * function to convert the given string's
 * characters to upper case. Note that 
 * this function handles non-letter 
 * characters for you, so you don't need 
 * to consider them here. 
 * 
 * I also put in a bug when getting the 
 * length of the string, which you will 
 * need to fix as well. 
 * Using the strlen() function may help.
 ***************************************/
void strings_task_2(char *buffer) {
    for(int i = 0; i < sizeof(buffer); i++) {
        // TODO: Replace this with your code.
    }
}

/***************************************
 * Make and return a copy of the buffer
 * by using malloc() to dynamically 
 * allocate memory, then use the strcpy()
 * string.h library function to copy the 
 * characters from the buffer to the copy
 * you're returning. Be sure to allocate
 * the correct amount of space for the
 * new string, but you do not need to
 * worry about freeing the space used.
 ***************************************/
char *strings_task_3(char *buffer) {
    
    // TODO: Replace this with your code.
    return NULL;

}