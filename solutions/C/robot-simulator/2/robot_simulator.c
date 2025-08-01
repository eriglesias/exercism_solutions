#include "robot_simulator.h"

robot_status_t robot_create(robot_direction_t direction, int x, int y) {
    return (robot_status_t){
        .direction = direction,
        .position = { .x = x, .y = y }
    };
}

void robot_move(robot_status_t *robot, const char *commands) {
    static int incx[] = { 0, 1, 0, -1 };
    static int incy[] = { 1, 0, -1, 0 };
    
    for (; *commands != '\0'; commands++) {
        switch (*commands) {
            case 'R':
                robot->direction = (robot->direction + 1) % DIRECTION_MAX;
                break;
            case 'L':
                robot->direction = (robot->direction + DIRECTION_MAX - 1) % DIRECTION_MAX;
                break;
            case 'A':
                robot->position.x += incx[robot->direction];
                robot->position.y += incy[robot->direction];
                break;
            default:
                break;
        }
    }
}
