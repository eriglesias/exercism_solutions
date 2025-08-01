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

float age(planet_t planet, int64_t seconds){
    float age_in_earth_years = (seconds / SECONDS_IN_A_YEAR);
    switch (planet)
    {   
        case MERCURY:return  age_in_earth_years / MERCURY_YEAR_IN_EARTH_YEARS;
        case VENUS:return age_in_earth_years / VENUS_YEAR_IN_EARTH_YEARS;
        case EARTH:return age_in_earth_years * 1;
        case MARS:return age_in_earth_years / MARS_YEAR_IN_EARTH_YEARS;
        case JUPITER:return age_in_earth_years / JUPITER_YEAR_IN_EARTH_YEARS;
        case SATURN:return age_in_earth_years / SATURN_YEAR_IN_EARTH_YEARS;
        case URANUS:return age_in_earth_years / URANUS_YEAR_IN_EARTH_YEARS;
        case NEPTUNE:return age_in_earth_years / NEPTUNE_YEAR_IN_EARTH_YEARS;
        default:return -1;
    }
} 

