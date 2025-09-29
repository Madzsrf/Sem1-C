#include <stdio.h>

// 1. Global variable (can be used anywhere)
int globalVar = 100;

void testLocalAndGlobal() {
    // 2. Local variable (can be used only inside this function)
    int localVar = 50;

    printf("Inside testLocalAndGlobal function:\n");
    printf("Local variable = %d\n", localVar);    // works
    printf("Global variable = %d\n", globalVar);  // works
}

void test1() {
    printf("\nInside testBlockScope function:\n");

    {
        int blockVar = 30; // only inside this block
        printf("Inside block: blockVar = %d\n", blockVar); // works
    }

    // printf("%d", blockVar); // ERROR! blockVar cannot be used here
    printf("Outside block: globalVar = %d\n", globalVar); // works
}

void test2() {
    // 4. Static local variable (remembers its value between function calls)
    static int staticVar = 0;
    staticVar++;
    printf("\nInside testStaticLocal function: staticVar = %d\n", staticVar);
}

void main() {
    printf("Accessing globalVar in main: %d\n", globalVar);

    testLocalAndGlobal();

    // printf("%d", localVar); // ERROR! localVar cannot be used here

    test1();

    // Call static local variable function multiple times
    test2(); // first call
    test2(); // second call
    test2(); // third call
}