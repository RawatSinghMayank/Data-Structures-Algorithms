import java.util.Scanner;
public class StringToAnotherDataType {

    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        String myStr1 = in.nextLine();
        String myStr2 = in.nextLine();
        int myInt = in.nextInt();
        double myDouble = in.nextDouble();

        System.out.println(String.valueOf(myDouble) + 10);
        System.out.println(String.valueOf(myInt) + 10);

        System.out.println(Integer.parseInt(myStr1) + 10);
        int conversionInt = Integer.parseInt(myStr1);
        System.out.println (conversionInt);
        System.out.println(Double.parseDouble(myStr2) + 10);
    }
}