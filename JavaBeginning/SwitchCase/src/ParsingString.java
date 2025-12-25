
import java.util.Scanner;

public class ParsingString {

    public static void main(String args[]) {

        Scanner in = new Scanner (System.in);
        String myNumber = in.nextLine();
        int myNumberInt = Integer.parseInt (myNumber);

        System.out.println(myNumber + 22);
        System.out.println(myNumberInt + 22);

        String myDouble = in.nextLine();
        double result = Double.parseDouble(myDouble);
        System.out.println(result  + 20);


        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        System.out.println(min);
        System.out.println(max);
    }
}
