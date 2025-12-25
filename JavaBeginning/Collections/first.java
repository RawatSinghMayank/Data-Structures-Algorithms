import java.util.Collection;
import java.util.ArrayList;

public class first {

	public static void main (String []args){

		Collection nums = new ArrayList ();
		nums.add(20);
		nums.add(3);
		nums.add(4);
		nums.add(52);
		nums.add("Mayank");

        for (Object num : nums){
            int numx = (Integer)num;
            System.out.println ( numx*2 ); //runtime Error we have not mentioned type that'w why we are not getting compile type error

        }
	}

}