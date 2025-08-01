#include "pangram.h"
#include <string.h>
#include <ctype.h>

bool is_pangram(const char *sentence) {
    if (!sentence) return false;
    
    for (char c = 'a'; c <= 'z'; c++) {
        if (!strchr(sentence, c) && !strchr(sentence, toupper(c))) {
            return false;
        }
    }
    return true;
}

