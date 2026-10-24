#include <stdio.h>

// Function prototype (declaration)
int add(int a, int b);//int add is return type of funct

int main() {
    int result = add(3, 4);
    printf("Sum = %d\n", result);
    return 0;
}

// Function definition (after main)
int add(int a, int b) {
    return a + b;
}