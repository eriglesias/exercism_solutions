#include "space_age.h"
#include <stdio.h>
#include <stdlib.h>

#define SECONDS_IN_A_YEAR 31557600.0F 


float age(planet_t planet, int64_t seconds){

    switch (planet)
    {
        case MERCURY:
        return (seconds  / (float)SECONDS_IN_A_YEAR) / 0.2408467;
        case VENUS:
        return (seconds / (float)SECONDS_IN_A_YEAR) / 0.61519726;
        case EARTH:
        return (seconds / (float)SECONDS_IN_A_YEAR) * 1;
        case MARS:
        return (seconds / (float)SECONDS_IN_A_YEAR) / 1.8808158;
        case JUPITER:
        return (seconds / (float)SECONDS_IN_A_YEAR) / 11.862615;
        case SATURN:
        return (seconds / (float)SECONDS_IN_A_YEAR) / 29.447498;
        case URANUS:
        return (seconds / (float)SECONDS_IN_A_YEAR) / 84.016846;
        case NEPTUNE:
        return (seconds / (float)SECONDS_IN_A_YEAR) / 164.79132;
        default:
        return -1;
    }
} 

