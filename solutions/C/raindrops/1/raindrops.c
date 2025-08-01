#include "raindrops.h"

enum sounds {
    PLING  = 3,
    PLANG = 5,
    PLONG = 7
};

char *convert(char result[], int drops){
   if (drops % PLING == 0)
    strcat(result, "Pling");
   if (drops % PLANG == 0)
    strcat(result, "Plang");
   if (drops % PLONG == 0)
    strcat(result, "Plong");
   if (!*result)
    sprintf(result, "%d", drops);
    return result; 
}


