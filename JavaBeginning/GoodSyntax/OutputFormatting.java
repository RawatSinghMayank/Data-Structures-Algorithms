import java.util.Scanner;

    public class OutputFormatting {

        public static void main (String []args){

            Scanner in = new Scanner(System.in);

            System.out.println("================================");
            for (int i = 0; i < 3; i++){
                String myString = in.next();
                int myInt = in.nextInt();
                System.out.printf ("%-15s%03d%n",myString,myInt);

            }
            System.out.println("================================");

            in.close();
        }
    }
