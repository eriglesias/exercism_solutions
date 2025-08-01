#include "space_age.h"
#include <stdio.h>
#include <stdlib.h>

#define SECONDS_IN_A_YEAR 31557600.0F 


float age(planet_t planet, int64_t seconds){
    float division = (seconds / SECONDS_IN_A_YEAR);
    switch (planet)
    {   
        case MERCURY:return  division / 0.2408467F;
        case VENUS:return division / 0.61519726F;
        case EARTH:return division * 1;
        case MARS:return division / 1.8808158F;
        case JUPITER:return division / 11.862615F;
        case SATURN:return division / 29.447498F;
        case URANUS:return division / 84.016846F;
        case NEPTUNE:return division / 164.79132F;
        default:return -1;
    }
} 

