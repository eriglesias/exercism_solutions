#include "darts.h"
#include <math.h>

uint8_t score(coordinate_t coordinate) {
    float radius = sqrt(coordinate.x * coordinate.x + coordinate.y * coordinate.y);
    if (radius <= 1.0f) {
        return 10;
    }
    if (radius <= 5.0f) {
        return 5;
    }
    if (radius <= 10.0f) {
        return 1;
    }
    return 0;
}
