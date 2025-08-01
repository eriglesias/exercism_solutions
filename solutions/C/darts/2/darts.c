#include "darts.h"
#include <math.h>

uint8_t score(coordinate_t coordinate) {
    float radiusSquared = coordinate.x * coordinate.x + coordinate.y * coordinate.y;
    if (radiusSquared <= 1.0f) {
        return 10;
    }
    if (radiusSquared <= 25.0f) {
        return 5;
    }
    if (radiusSquared <= 100.0f) {
        return 1;
    }
    return 0;
}

