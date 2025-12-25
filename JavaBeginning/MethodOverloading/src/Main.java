public class Main{

    public static final String INVALID_VALUE_MESSAGE = "Invalid value";  // constant value
    public static void main (String args[]){

        calculateScore();
        calculateScore(20);
    }

    public static void  calculateScore (int x){
	System.out.println(x);
    }


    public static void calculateScore(){
	System.out.println("nothing");
    }

}