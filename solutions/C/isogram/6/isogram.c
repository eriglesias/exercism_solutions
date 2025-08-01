#include "isogram.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

static bool is_letter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool is_isogram(const char phrase[]) {
    if (phrase == NULL) {
        return false;
    }

    bool encountered[26] = {false};

    for (size_t i = 0; phrase[i] != '\0'; i++) {
        if (!is_letter(phrase[i])) {
            continue;
        }
        char current_char = tolower((unsigned char)phrase[i]);

        if (encountered[current_char - 'a']) {
            return false;
        }

        encountered[current_char - 'a'] = true;
     
    }
    return true;
}
