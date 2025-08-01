#include "grains.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

uint64_t square(uint8_t index){
    if (index == 0){
        return 0;
    }
    if (index > 64){
        return 0;
    } 
    {
        uint8_t adapted_index = index - 1;
        return (uint64_t)pow(2, adapted_index);
    }
}

uint64_t total(void){
    return (uint64_t)pow(2, 64);
}
 