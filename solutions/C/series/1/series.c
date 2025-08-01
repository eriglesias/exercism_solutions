/*
    Function: slices

    Description:
        Slice a given input text into consecutive substrings of a specified length.

    Parameters:
        input_text (char*): A pointer to the input text to be sliced.
        substring_length (unsigned int): The desired length of the substrings.

    Returns:
        slices_t: A structure containing information about the sliced substrings.
                  - substring_count: The count of substrings.
                  - substring (char**): An array of pointers to the sliced substrings.

    Note:
        The caller is responsible for freeing the memory allocated for the substrings and the pointers to those substrings.

*/

#include "series.h" // Include the header file defining the slices_t structure
#include <stdlib.h> // Include standard library functions like malloc and calloc
#include <string.h> // Include string manipulation functions like strlen and strncpy

slices_t slices(char *input_text, unsigned int substring_length) {
    // Calculate the length of the input text
    size_t input_length = strlen(input_text);

    // Check if the substring length is valid
    if (!substring_length || input_length < substring_length)
        // If the substring length is invalid, return a structure with substring count set to 0
        return (slices_t){0};

    // Calculate the number of substrings that can be generated from the input based on the specified substring length
    int count = input_length - substring_length + 1;

    // Allocate memory for an array of pointers to store the substrings
    slices_t result = {count, malloc(count * sizeof(char *))};

    // Iterate over the input text, slicing it into substrings of the specified length, and store them in the result structure
    for (int i = 0; i < count; i++) {
        // Allocate memory for the current substring
        char *substr = calloc(substring_length + 1, sizeof(char));
        // Copy the substring from the input text to the allocated memory
        result.substring[i] = strncpy(substr, input_text + i, substring_length);
    }

    // Return the result structure containing the count of substrings and an array of pointers to those substrings
    return result;
}
