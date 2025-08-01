#include "isogram.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool is_isogram(const char phrase[]) {
    if (phrase == NULL) {
        return false;
    }

    bool encountered[26] = {false};

    for (size_t i = 0; phrase[i] != '\0'; i++) {
        if (phrase[i] == ' ' || phrase[i] == '-') {
            continue;
        }
        char current_Char = tolower((unsigned char)phrase[i]);

        if (encountered[current_Char - 'a']) {
            return false;
        }

        encountered[current_Char - 'a'] = true;
     
    }
    return true;
}
