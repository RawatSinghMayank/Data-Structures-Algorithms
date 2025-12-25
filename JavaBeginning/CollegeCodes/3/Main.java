import java.util.Scanner;

class Divisors {
    
    public static int findDivisorsSum (int num){

        int totalDivisorSum = 0;
        for (int divisor = 1; divisor * divisor <= num; divisor++){
            if (num % divisor == 0){
                totalDivisorSum += divisor;
                
                if ((num/divisor) != divisor){
                    totalDivisorSum += (num/divisor);
                }
            }
        }
        return totalDivisorSum;
    }
}

class FriendlyPair {

    public static void  solve (){

    Scanner in = new Scanner (System.in);
    int num1 = in.nextInt(), num2 = in.nextInt();

    int num1DivisorSum = Divisors.findDivisorsSum (num1), num2DivisorSum = Divisors.findDivisorsSum(num2);

    if (((double)num1DivisorSum / (double)num1) == ((double)num2DivisorSum / (double)num2)) 
        System.out.println ("Friendly Pairs");
    else 
        System.out.println ("Not Friendly Pairs");

    if (((num1DivisorSum - num1) > num1) && ((num2DivisorSum) - num2 > num2))
       System.out.println ("Abundant Numbers");

    else 
        System.out.println ("Not Abundant Numbers");

    }
}

public class Main {

    public static void main (String []args){

        FriendlyPair.solve();
    }

}