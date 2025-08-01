#include "difference_of_squares.h"
#include <math.h>

unsigned int sum_of_squares(unsigned int number){
   int square_of_i= 0;
   for (unsigned int i=1; i<= number; i++){
     square_of_i += pow(i,2);
    }
     return square_of_i; 
}
unsigned int square_of_sum(unsigned int number){
    unsigned  sum=0;
    for (unsigned int i = 1; i<= number; i++){
        sum += i;
    }
    return pow(sum,2);
}
unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}
