#include "space_age.h"
#include <stdio.h>
#include <stdlib.h>

#define SECONDS_IN_A_YEAR 31557600.0F 
#define MERCURY_YEAR_IN_EARTH_YEARS 0.2408467F
#define VENUS_YEAR_IN_EARTH_YEARS 0.61519726F
#define MARS_YEAR_IN_EARTH_YEARS 1.8808158F
#define JUPITER_YEAR_IN_EARTH_YEARS 11.862615F
#define SATURN_YEAR_IN_EARTH_YEARS 29.447498F
#define URANUS_YEAR_IN_EARTH_YEARS  84.016846F
#define NEPTUNE_YEAR_IN_EARTH_YEARS 164.79132F
#define ERROR_VALUE -1 

float age(planet_t planet, int64_t seconds){
    float age_in_earth_years = (seconds / SECONDS_IN_A_YEAR);
    float conversion_factors[] = {
        MERCURY_YEAR_IN_EARTH_YEARS,
        VENUS_YEAR_IN_EARTH_YEARS,
        1.0, // the Earth
        MARS_YEAR_IN_EARTH_YEARS,
        JUPITER_YEAR_IN_EARTH_YEARS,
        SATURN_YEAR_IN_EARTH_YEARS,
        URANUS_YEAR_IN_EARTH_YEARS,
        NEPTUNE_YEAR_IN_EARTH_YEARS
    };
    if (planet >= MERCURY && planet <= NEPTUNE) {
        return age_in_earth_years / conversion_factors[planet];
        }else{
            return ERROR_VALUE;
        } 
}

