#include "armstrong_numbers.h"
#include <math.h>


int findCount(int n)
{
    int number_of_digits = 0;
 
    while (n != 0) {
        number_of_digits++;
        n /= 10;
    }
    return number_of_digits;
}

bool is_armstrong_number(int candidate){
    int num_digits = findCount(candidate);
    int temp = candidate;
    int sum = 0;
    while (temp !=0)
    {
        int digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /=10;
    }
    
    return (sum == candidate);
}
