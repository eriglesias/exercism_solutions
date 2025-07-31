import java.text.MessageFormat;

public class Twofer {
    public String twofer(String name) {
        String recipient = (name != null) ? name : "you";
        String pattern = "One for {0}, one for me.";
        return MessageFormat.format(pattern, recipient);
    }
}