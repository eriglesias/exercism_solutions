class ReverseString {

    String reverse(String inputString) {
        String reversedStr = "";
        for (int i=0; i< inputString.length(); i++){
            reversedStr = inputString.charAt(i) + reversedStr;
        }
        return reversedStr;
    }
  
}

