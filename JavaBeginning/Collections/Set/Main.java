import java.util.ArrayList;
import java.util.Collections;
import java.util.Set;
import java.util.HashSet;

public class Main {

    public static void main (String []args){
         
         Set  <Integer> nums = new HashSet <Integer>();

            nums.add(2);
            nums.add(3);
            nums.add(4);
            nums.add(4);
            nums.add(4);
        
            System.out.println (nums);

            System.out.println (nums.contains(4));

            nums.remove(4);
            System.out.println(nums.size());
            for (int n : nums){
                System.out.println (n);
            }
            // nums.add(1,30230);

            // for (int i = 0; i < nums.size(); i++){
            //     System.out.print(nums.get(i) + " ");
            // }

            // Collections.sort(nums);

            // System.out.println (nums);

            // nums.set (1,-1);

            // System.out.println();
            //  for (int i = 0; i < nums.size(); i++){
            //     System.out.print(nums.get(i) + " ");
            // }

            // nums.remove(1);
            // System.out.println (nums);

            // nums.clear();
            // System.out.println (nums);



    }
}