#include "isogram.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void lower_string(char phrase[]) {
    for(int i = 0; phrase[i]; i++) {
        phrase[i] = tolower(phrase[i]);
    }
}

bool is_isogram(const char phrase[]) {
    if (phrase == NULL) {
        return false;
    }

    int length = strlen(phrase);
    for (int i = 0; i < length; i++) {
        int count = 0;
        if (phrase[i] == ' ' || phrase[i] == '-') {
            continue;
        }
        for (int j = 0; j < length; j++) {
            if (tolower(phrase[i]) == tolower(phrase[j])) {
                count++;
            }
        }
        if (count > 1) {
            return false;
        }
    }
    return true;
}
