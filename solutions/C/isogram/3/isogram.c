#include "isogram.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>



bool is_isogram(const char phrase[]) {
    if (phrase == NULL) {
        return false;
    }

      for (size_t i = 0; phrase[i] != '\0'; i++) {
        if (phrase[i] == ' ' || phrase[i] == '-') {
            continue;
        }

        for (size_t j = i + 1; phrase[j] != '\0'; j++) {
            if ((unsigned char)tolower(phrase[i]) == tolower((unsigned char)phrase[j])) {
                return false;
            }
        }
    }
    return true;
}
