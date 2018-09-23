#include <stdio.h>

/**
 * Disclosure, the following code is from a stackoverflow author, not mine.
 */
char * stringLower(char * charPtr) {
    /**
     * @brief convert the char pointer to all lowercases
     * @param charPtr: the original character pointer
     * @retval char *: the lowercase char value pointer
     */

    for (char *p = charPtr; *p; ++p) // iterate through all characters in charPtr
        *p = *p >='A' && *p <= 'Z' ? *p | 0x60 : *p;
        // check if value of 'A' <= p <= 'Z' ? (*p | 0x60) : *p
}

