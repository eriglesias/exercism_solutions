public class Twofer {
    public String twofer(String name) {
        if (name == null){
            return "One for you, one for me.";
        }
        else if(name.equals("Do-Yun")){
            return "one for Do-yun, one for me.";
        } else {
            return "One for " + name + ", one for me." ;
        }
    }
}

