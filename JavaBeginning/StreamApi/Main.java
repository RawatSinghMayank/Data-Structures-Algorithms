import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;
import java.util.function.Consumer;

public class Main {
    
    public static void main (String []args){

        List <Integer> nums  = Arrays.asList (1,2,3,4,5,6);

        for (int n : nums)
            System.out.print(n + " ");

        System.out.println();

        for (int i = 0; i < nums.size(); i++)
            System.out.print(nums.get(i) + " ");

        System.out.println();

        // nums.forEach (n -> System.out.print(n + " "));

        // Explanation of this loop

        // Consumer <Integer> obj = new Consumer <Integer> (){

        //     public void accept (Integer n){
        //         System.out.println (n);
        //     }
        // };
        // nums.forEach (n -> System.out.println(n));

        // We can use lamda expressino as it is a functional interface
        
        //  Consumer <Integer> obj = (Integer n) -> {    

          
        //         System.out.println (n);
            
        // };

// Further we have one statement we can remove curly brackets
            
            // Consumer <Integer> obj = n -> System.out.println (n);
     
            // Now we can write this statement directly into function 

        nums.forEach (n -> System.out.println(n));
}
}