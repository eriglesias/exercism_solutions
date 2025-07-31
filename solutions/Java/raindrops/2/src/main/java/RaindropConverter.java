// Map solution 
import java.util.Map;
import java.util.TreeMap;

class RaindropConverter {
    private static final TreeMap <Integer, String> lookup = new TreeMap <Integer, String> (Map.of(3, "Pling", 5, "Plang", 7, "Plong"));
    String convert(int number){
        var output = new StringBuilder("");
        lookup.forEach((divisor, drop) -> {
            if (number % divisor ==0)
            output.append(drop);
        });
        return output.length() != 0 ? output.toString() : Integer.toString(number);
    }
}
