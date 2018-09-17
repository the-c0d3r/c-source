#include <stdio.h>
#include <string.h>

/**
 * @brief this is a very simple csv parser that I wrote to test csv parsing
 * @note this will not handle the escaped commas inside the field. And this
 *       will only parse the first 7 fields with 49 characters length.
 *       this is a POC only.
 */

int main() {
    char *csv = {"field1,field2,field3,field4,field5,field6,field7"};

    char parsed[7][50] = {0};
    int i, j, index = 0;
    char ch;

    for (i = 0; i < 7; i++) {
        // loop the first dimension
        for (j = 0; j < 50; j++) {
            // loop the second dimension
            ch = csv[index];
            if (ch != ',') {
                // if it is not comma, copy it to ch
                parsed[i][j] = ch;
            } else {
                parsed[i][j] = '\0';
                index++;
                break; // without break, it'll wreak heavoc on the code
            }
            index++;
        }
    }


    for (i = 0; i< 7; i++)
        printf("%d : %s\n", i, parsed[i]);

    return 0;
}
