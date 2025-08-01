#include "gigasecond.h"

#define addedSeconds 1000000000

void gigasecond(time_t input, char *output, size_t size){
   time_t val = input + addedSeconds;
   struct tm *timeinfo = gmtime(&val);
   strftime(output, size, "%Y-%m-%d %H:%M:%S", timeinfo);
}

