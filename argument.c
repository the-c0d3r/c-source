#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Program name is %s\n", argv[0]);

    if (argc == 2) {
        printf("The argument supplied is %s\n", argv[1]);
    } else if ( argc > 2 ) {
        puts("Too manhy arugments supplied.");
    } else {
        printf("one argument expected\n");
    }
}
