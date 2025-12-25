import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class mySort implements Comparator <Integer> {

    public int compare (Integer num1, Integer num2){

         if (num1%10 > num2%10)  return 1;
          else return -1;
    }
}

public class Main {

    public static void main (String []args){

        // Comparator <Integer> comp = new Comparator <Integer> (){

        //     public int compare (Integer num1, Integer num2){
        //         if (num1%10 > num2%10)  return 1;
        //         else return -1;
        //     }
            
        // }; 
        // Use this anonymous class or above method

        Comparator <Integer>  obj = new mySort();

        ArrayList <Integer> nums = new ArrayList <>();

        nums.add (40);
        nums.add (31);
        nums.add (22);

        Collections.sort (nums, obj);

        System.out.println (nums);

    }
}