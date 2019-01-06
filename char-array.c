#include <stdio.h>

int main(int argc, char *argv[]) {
    char name[] = "this is one way";
    // char *name2[] = "this is another way";
    // looks like above declaration cannot be done, as *name2[] == char **ptr
    // and the given data is of one dimension
    char *name3[] = {"this", "is", "another", "way" };

    printf("%s\n", name);
    printf("%s\n", *name3);

    return 0;
}
