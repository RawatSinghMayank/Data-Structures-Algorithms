import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;


public class Streamm {
    public static void main (String []args){
        
        List <Integer> nums = Arrays.asList (1,2,3,3,43,53);

        // Stream <Integer> s1 =  nums.stream();
        // Stream <Integer> s2 = s1.filter (n -> n %2 == 0);
        // Stream <Integer> s3 = s2.map (n -> n*2);

        // In one line 
        Stream <Integer> result = nums.stream()
                                .filter (n -> n%2 == 0)
                                .map (n -> n * 5);

        result.forEach (n -> System.out.print(n));
    }

} 