import java.util.Scanner;

public class Main {

    public static void main (String []args){
        
        Scanner in = new Scanner (System.in);
        
        int num = in.nextInt();

        if (num == 0) {
            System.out.println (1);
            return ;
        }
        int tempNum = num, newNum = 0, place = 1;

        while (tempNum > 0){
            int digit = tempNum % 10;

            if (digit == 0){
                digit = 1;
            }
            newNum += digit * place;
            place *= 10;
            tempNum /= 10;

        }

        System.out.println (newNum);

    }
}