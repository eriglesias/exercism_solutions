public class Lasagna {
    // TODO: define the 'expectedMinutesInOven()' method
        public int expectedMinutesInOven(){
            return  40;
        }

    // TODO: define the 'remainingMinutesInOven()' method
        public int remainingMinutesInOven(int actualMinutes){
            return 40 - actualMinutes;
        }
    // TODO: define the 'preparationTimeInMinutes()' method
        public int preparationTimeInMinutes(int numOfLayers) {
            return numOfLayers * 2;
        }
    // TODO: define the 'totalTimeInMinutes()' method
        public int totalTimeInMinutes( int numOfLayers, int minutesInOven){
            return minutesInOven + (numOfLayers * 2);
        }
}
