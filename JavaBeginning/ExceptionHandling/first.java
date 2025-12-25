import java.util.Scanner;
public class first {

    public static void main (String []args){

        Scanner in = new Scanner (System.in);
        int x = in.nextInt(), y =in.nextInt();
        String str = null; // if you assign str=""; it will show length of string equal to 1
        int [] arr = {1,2,3,3,4};
        try {
            int result = x / y;
            System.out.println (arr[5]);
            System.out.println (str.length());
        }

        catch (ArithmeticException e){
            System.out.println ("Arithmetic Expression ");
        }
        catch (ArrayIndexOutOfBoundsException e){
            System.out.println ("Array index out of bounds exception");
        }
        catch (Exception e){
            System.out.println ("Don't know");
        }
        // if you keep this parent exception Exception e on top of all exception it will show error
        // bcz it can handle all exception then why we need all other exception which we have defined below it.
        
    }
}