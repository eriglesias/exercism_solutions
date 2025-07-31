import java.text.Normalizer;

class ReverseString {

    String reverse(String inputString) {
        String normalizedString = Normalizer.normalize(inputString, Normalizer.Form.NFC);
        StringBuilder reversedStr = new StringBuilder(normalizedString);
        return reversedStr.reverse().toString();
    }

    public static void main(String[] args) {
        ReverseString reverser = new ReverseString();
        String input = "Amélie Gruyères";
        String reversed = reverser.reverse(input);
        System.out.println(reversed);
    }
}