import java.util.Scanner;

public class TextFormat {
    public static  void main (String []args){

        Scanner in = new Scanner(System.in);
        String myString = in.nextLine();
        int myInt = in.nextInt();

        System.out.printf("%-15s%03d%n",myString,myInt);
        System.out.printf("%15s%03d%n",myString,myInt);

    }
}
