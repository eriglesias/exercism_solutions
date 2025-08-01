#include <stdbool.h>
#include <ctype.h>
#include <stddef.h>

bool is_pangram(const char *sentence) {
    if (sentence == NULL) {
        return false;
    }

    // An array to keep track of whether each letter is present
    bool present[26] = {false};

    // Iterate through each character of the sentence
    while (*sentence != '\0') {
        if (isalpha(*sentence)) {
            // Convert character to lowercase and calculate its index in the array
            int index = tolower(*sentence) - 'a';
            // Mark the letter as present
            present[index] = true;
        }
        // Move to the next character in the sentence
        sentence++;
    }

    // Check if all letters from 'a' to 'z' are present
    for (int i = 0; i < 26; i++) {
        if (!present[i]) {
            return false; // If any letter is missing, it's not a pangram
        }
    }

    // If all letters are present, it's a pangram
    return true;
}

