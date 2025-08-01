#include "armstrong_numbers.h"
#include <math.h>
#define ERROR_MESSAGE -1

static int find_count(int n) {
    int number_of_digits = 0;
 
    while (n != 0) {
        number_of_digits++;
        n /= 10;
    }
    return number_of_digits;
}

bool is_armstrong_number(int candidate) {
    if (candidate < 0) {
        return ERROR_MESSAGE;
    }
    
    if (candidate < 10) {
        return true;
    }

    int num_digits = find_count(candidate);
    int temp = candidate;
    int sum = 0;

    for (temp = candidate; temp != 0; temp /= 10) {
        int digit = temp % 10;
        sum += pow(digit, num_digits);
    }

    return (sum == candidate);
}
