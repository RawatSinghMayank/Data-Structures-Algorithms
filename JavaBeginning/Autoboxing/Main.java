
public class Main {

    public static void main (String []args){


        int x = 10;
        Integer num = new Integer (x); // boxing  Boxing is the process of converting a primitive type (like int, char, double) into its corresponding wrapper class object (like Integer, Character, Double).
        System.out.println (num); 

        Integer fu = 23;// auto boxing Autoboxing is the automatic conversion that the Java compiler makes between primitive types and their corresponding wrapper classes.

        int num2 = num.intValue(); // unboxing
        int  num3 = num;
        System.out.println("G is here" + num3); // auto unboxing
    }
}