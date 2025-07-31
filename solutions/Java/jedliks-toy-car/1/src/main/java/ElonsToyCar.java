public class ElonsToyCar {
    public int distance;
    public int percentage=100;
    public static ElonsToyCar buy() {
        ElonsToyCar car = new ElonsToyCar();
        return car;
    }

    public String distanceDisplay() {
        return "Driven " + distance + " meters" ;
    }

    public String batteryDisplay() {
        if (percentage > 0) {
            return "Battery at " + percentage + "%";
        } 
        return "Battery empty";
    }

    public void drive() {
        // Each time you drive the car
        // distance += 20
        // battery -= 1
        percentage = percentage - 1;
        if(percentage >=0){
            distance = distance  + 20;
        } 
    }
}
