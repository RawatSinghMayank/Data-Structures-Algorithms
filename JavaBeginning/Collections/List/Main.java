import java.util.ArrayList;
import java.util.Collections;

public class Main {

    public static void main (String []args){
        ArrayList <Integer> nums = new ArrayList <Integer>();

            nums.add(2);
            nums.add(3);
            nums.add(4);
            
            System.out.println (nums.get(2));
            nums.add(1,30230);

            for (int i = 0; i < nums.size(); i++){
                System.out.print(nums.get(i) + " ");
            }

            Collections.sort(nums);

            System.out.println (nums);

            nums.set (1,-1);

            System.out.println();
             for (int i = 0; i < nums.size(); i++){
                System.out.print(nums.get(i) + " ");
            }

            nums.remove(1);
            System.out.println (nums);

            nums.clear();
            System.out.println (nums);



    }
}