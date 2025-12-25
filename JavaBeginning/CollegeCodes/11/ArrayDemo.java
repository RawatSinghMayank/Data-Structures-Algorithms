import java.util.HashMap;
import java.util.ArrayList;
import java.util.List;

class Pair {
    int first,second;
    Pair (int first,int second){
        this.first = first;
        this.second = second;
    }
    Pair (){
        this (0,0);
    }
}

public class ArrayDemo {

    ArrayDemo (){
    }
    
    void arrayFunc (int []nums, int target){

        HashMap <Integer,Integer> numbers = new HashMap <>();
        List <Pair> index = new ArrayList <Pair>();

        for (int i = 0; i < nums.length; i++){

            int ele = nums[i];
            int remaining = target - ele;

            if (numbers.containsKey(remaining)) {
                index.add (new Pair (i,numbers.get(remaining)));
            }

            numbers.put (ele,i);
        }

        for (Pair it : index){
            System.out.println (nums[it.first]+ " " + nums[it.second]);
        }
    }


    void arrayFunc (int []nums1, int n1, int []nums2, int n2){

            for (int index  = n2 - 1; index >= 0; index--){

                
                if (nums1[n1-1] > nums2[index]){
                    int temp = nums1[n1-1];
                    nums1[n1-1] = nums2[index];
                    nums2[index] = temp;
                }

                for (int i = n1 - 1; i >= 1; i--){
                    if (nums1[i-1] > nums1[i]){
                        int temp = nums1[i];
                        nums1[i] = nums1[i-1];
                        nums1[i-1] = temp;
                    }
                }
            }
    
        }
    

    public static void main (String []args){

        int []nums = {4,6,5,-10,8,5,20};

        ArrayDemo array = new ArrayDemo ();
        array.arrayFunc (nums, 10);

        int [] a = {5,7,9};
        int [] b = {2,4,6};

        System.out.println ("Before merging ");
        for (int ele : a ) System.out.print (ele + " ");
        System.out.println();
        for (int ele : b) System.out.print (ele + " ");
        System.out.println();

        array.arrayFunc (a,3,b,3);

        for (int ele : a ) System.out.print (ele + " ");
        System.out.println();
        for (int ele : b) System.out.print (ele + " ");
        System.out.println();
        
    }
}