#include "pointers.h"
#include "strings.h"
#include "functions.h"
#include "data_structures.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUF_SIZE 80

/********************************
 * Any modifications to this
 * file will not be reflected in
 * your final submission.
 * ******************************/


#ifdef STRINGS
/* Initialize the string buffer. */
static void init_buffer(char *buf, size_t len) {
    for(int i = 0; i < len; i++) {
        buf[i] = 'a' + (i%26);
    }
    buf[len-1] = 0;
}

static int string_tests() {
    /* Verify string tasks */
    int tests_passed = 0;
    char buf[BUF_SIZE];
    init_buffer(buf, BUF_SIZE);

    /* Task 1 */
    strings_task_1(buf);
    char *answer = "CS429";

    if(!strcmp(buf, answer)) {
        printf("Passed strings task 1\n");
        tests_passed += 1;
    }
    else {
        printf("Failed strings task 1\n\tYour output: %s\n\tCorrect output: %s\n", buf, answer);
    }

    /* Task 2 */
    init_buffer(buf, BUF_SIZE);
    buf[12] = 0;

    strings_task_2(buf);
    answer = "ABCDEFGHIJKL";

    if(!strcmp(buf, answer)) {
        printf("Passed strings task 2\n");
        tests_passed += 1;
    }
    else {
        printf("Failed strings task 2\n\tYour output: %s\n\tCorrect output: %s\n", buf, answer);
    }

    /* Task 3 */
    init_buffer(buf, BUF_SIZE);
    buf[16] = 0;

    answer = strings_task_3(buf);

    if(answer && !strcmp(buf, answer)) {
        printf("Passed strings task 3\n");
        tests_passed += 1;
        free(answer);
    }
    else {
        printf("Failed strings task 3\n\tYour output: %s\n\tCorrect output: %s\n", buf, answer);
    }
    return tests_passed;
}
#endif

/* Run all tests. */
int main(int argc, char **argv) {

    int tests_passed = 0;
    int total_tests = 0;

    #ifdef STRINGS
    tests_passed += string_tests();
    total_tests += 3;
    #endif

    printf("-------------------------------\n");
    printf("Total tests passed: %d out of %d\n", tests_passed, total_tests);
    
    return 0;
}