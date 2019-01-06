#include <stdio.h>

int main(int argc, char *argv[]) {
    char name[] = "abc";
    char *charPtr = name;

    int x = 10;
    int *intPtr = &x;
    unsigned int *uIntPtr = &x;

    printf("Size of int: %ld\n", sizeof(int));
    printf("Size of long: %ld\n", sizeof(long));
    printf("Size of short: %ld\n", sizeof(short));
    printf("Size of unsigned int: %ld\n", sizeof(unsigned int));
    printf("Size of unsigned long long: %ld\n", sizeof(unsigned long long));

    printf("Pointers\n");
    printf("Size of int*: %ld\n", sizeof(intPtr));
    printf("Size of unsigned int*: %ld\n", sizeof(uIntPtr));

    printf("Size of char[4] (aka char*): %ld\n", sizeof(name));
    printf("Size of char: %ld\n", sizeof(char));
    printf("Size of char*: %ld\n", sizeof(charPtr));
    return 0;
}

