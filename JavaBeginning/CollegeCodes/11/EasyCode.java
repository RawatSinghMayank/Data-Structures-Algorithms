public class EasyCode {
    // Overloaded method to find pairs with given sum
    void arrayFunc(int[] arr, int target) {
        System.out.println("Pairs of elements whose sum is " + target + " are:");
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] + arr[j] == target) {
                    System.out.println(arr[i] + " + " + arr[j] + " = " + target);
                }
            }
        }
    }

    // Overloaded method to merge two sorted arrays
    void arrayFunc(int[] A, int p, int[] B, int q) {
        // Create a temporary array to store merged elements
        int[] temp = new int[p + q];
        
        // Copy elements of A and B into temp
        for (int i = 0; i < p; i++) {
            temp[i] = A[i];
        }
        for (int i = 0; i < q; i++) {
            temp[p + i] = B[i];
        }

        // Sort the temporary array
        java.util.Arrays.sort(temp);

        // Fill A with first p smallest elements
        for (int i = 0; i < p; i++) {
            A[i] = temp[i];
        }

        // Fill B with remaining q elements
        for (int i = 0; i < q; i++) {
            B[i] = temp[p + i];
        }

        // Print the sorted arrays
        System.out.println("Sorted Arrays:");
        System.out.print("A: [");
        for (int i = 0; i < p; i++) {
            System.out.print(A[i]);
            if (i < p - 1) System.out.print(", ");
        }
        System.out.println("]");
        
        System.out.print("B: [");
        for (int i = 0; i < q; i++) {
            System.out.print(B[i]);
            if (i < q - 1) System.out.print(", ");
        }
        System.out.println("]");
    }

    public static void main(String[] args) {
        ArrayDemo demo = new ArrayDemo();

        // Test case for finding pairs with sum
        int[] numbers = {4, 6, 5, -10, 8, 5, 20};
        int target = 10;
        demo.arrayFunc(numbers, target);

        System.out.println(); // Separator for clarity

        // Test case for merging sorted arrays
        int[] A = {1, 5, 6, 7, 8, 10};
        int[] B = {2, 4, 9};
        demo.arrayFunc(A, A.length, B, B.length);

        for (int a : A) System.out.print (a + " " );
        System.out.println();
        for (int b : B) System.out.print (b + " ");
    }
}