// 3 iteration  
public final class Leap { 
    public final boolean isLeapYear(int year) {
        return isDivisibleBy(year, 4) && isNotDivisibleBy100ButDivisibleBy400(year);
    } 
    private boolean isNotDivisibleBy100ButDivisibleBy400(int year) {
        return year % 100 != 0 || isDivisibleBy(year, 400);
    }
    private boolean isDivisibleBy(int year, int divBy) {
        return year % divBy ==0;
    }

}


