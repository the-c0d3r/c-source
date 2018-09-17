#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SPACESTOP 4

/**
 * @brief de-tab converts tab character \t into 4 spaces
 * takes in values from stdin and pipe it to stdout
 *
 * @example
 *      ./detab < tabfile > output.spaces
 */

int main() {
    int ch;
    int index = 0;
    char line[1000] = {0};

    // check if index is 999 already, meaing 1000 words per line is hit, and look for EOF
    while ( index != 999 && ( ch = getchar()  ) != EOF) {
        // check if char is not equal to \t or \n
        if ( ch != '\t'  && ch != '\n') {
            // add the character to array, increment index
            line[index] = ch;
            index++;
        // check if char is newline
        } else if ( ch == '\n' ) {
            // add newline char and printout line, then reset char array and index
            line[index] = '\n';
            printf("%s", line);

            line[0] = '\0';
            index = 0;
        // check if it is tab character
        } else if (ch == '\t') {
            // writes number of spaces defined in SPACESTOP, and increment index
            int i;
            for (i=0; i<SPACESTOP; i++ ) {
                line[index] = ' ';
                index ++;
            }
        }
    }
}
