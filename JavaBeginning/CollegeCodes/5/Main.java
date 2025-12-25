import java.util.Scanner;
import java.util.Collections;
import java.util.Arrays;

// interface Swap {
//     public void swap (int arr[], int i, int j);
// }

public class Main {

    public static void swap (int arr[], int i, int j){

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void main (String []args){
        
        Scanner in = new Scanner (System.in);

        // Swap obj = new Swap() {

        // public void swap (int arr[], int i ,int j){
        //     int temp = arr[i];
        //     arr[i] = arr[j];
        //     arr[j] = temp;  
        // }
        // };

        int len = in.nextInt();
        int [] arr = new int[len];

        for (int ele = 0; ele < len; ele++){
            arr[ele] = in.nextInt();
        }

        
        
        for (int index = 1; index < len ; index += 2){
             if (arr[index] < arr[index-1]) swap (arr,index,index-1);
             if (index + 1 < len && arr[index] < arr[index + 1]) swap (arr,index,index+1);
        }

        for (int x : arr){
            System.out.print (x + " ");
        }

    }
}