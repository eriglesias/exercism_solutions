#include "queen_attack.h"
#include <stdlib.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2){
    // Check if the positions are valid
    if (queen_1.row > 7 || queen_1.column > 7 || queen_2.row > 7 || queen_2.column > 7) {
        return INVALID_POSITION;
    }

    // Check if queens are on the same position
    if (queen_1.row == queen_2.row && queen_1.column == queen_2.column) {
        return INVALID_POSITION;
    }

    // Check if queens are on the same row or column
    if (queen_1.row == queen_2.row || queen_1.column == queen_2.column) {
        return CAN_ATTACK;
    }

    // Check if queens are on the same diagonal
    if (abs(queen_1.row -queen_2.row) == abs(queen_1.column -queen_2.column)) {
        return CAN_ATTACK;
    }

    // If the conditions above are not met, queens cannot attack
    return CAN_NOT_ATTACK;
}

