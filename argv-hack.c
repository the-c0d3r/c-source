#include <stdio.h>

/**
 * @brief to test out the argv array values
 * @note see https://stackoverflow.com/questions/31045329/argv-prints-out-environment-variables
 * @tldr going out of array leads to *undefined behavior*. Old Unix used to have 3 arguments to
 *       main function `int main(int argc, char *argv[], char *envp[])` the last one is the env
 *       variables. So it crosses over to the envp array.
 */

int main (int argc, char* argv[]) {
    printf("argc: %d\n", argc);
    int i;
    for (i=0; i<100; i++)
        printf("Argv[%d]: %s\n", i, argv[i]);
}
