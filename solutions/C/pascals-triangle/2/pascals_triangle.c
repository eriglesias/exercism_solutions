#include "pascals_triangle.h"
#include <stdlib.h>
#include <stdio.h>

// Function prototypes
uint8_t** create_triangle_0(void);
void free_triangle(uint8_t** triangle, size_t rows);
uint8_t** create_triangle(size_t rows);

// Frees the memory allocated for the triangle
void free_triangle(uint8_t** triangle, size_t rows) {
    if (triangle == NULL)
        return;
    
    for (size_t i = 0; i < rows; ++i) {
        free(triangle[i]);
        triangle[i] = NULL;
    }
    free(triangle);
}

// Creates Pascal's triangle with one row
uint8_t** create_triangle_0(void) {
    uint8_t** result = calloc(1, sizeof(uint8_t*));
    if (result == NULL)
        return NULL;
    
    result[0] = calloc(1, sizeof(uint8_t));
    if (result[0] == NULL) {
        free(result);
        return NULL;
    }
    
    result[0][0] = 0;
    return result;
}

// Creates Pascal's triangle with 'rows' rows
uint8_t** create_triangle(size_t rows) {
    if (rows == 0)
        return create_triangle_0();
    
    uint8_t** result = calloc(rows, sizeof(uint8_t*));
    if (result == NULL)
        return NULL;
    
    for (size_t i = 0; i < rows; ++i) {
        result[i] = calloc(rows, sizeof(uint8_t));
        if (result[i] == NULL) {
            free_triangle(result, i > 0 ? i - 1 : 0);
            return NULL;
        }
    }
    
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j <= i; ++j) {
            if (j == 0 || j == i)
                result[i][j] = 1;
            else
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
        }
    }
    return result;
}

