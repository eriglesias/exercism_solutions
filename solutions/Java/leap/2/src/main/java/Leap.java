class Leap {
    // 2 iteration ternary operator 
    boolean isLeapYear(int year) {
       return year % 100 == 0 ? year % 400 == 0 : year % 4 == 0;
}
}