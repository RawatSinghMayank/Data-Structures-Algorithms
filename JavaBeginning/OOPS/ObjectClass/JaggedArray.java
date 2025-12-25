import java.util.Scanner;

public class JaggedArray {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        // Take number of rows from user
        System.out.print("Enter number of rows: ");
        int n = in.nextInt();

        int[][] nums = new int[n][];

        // Input for each row
        for (int i = 0; i < n; i++) {
            System.out.print("Enter number of elements in row " + (i + 1) + ": ");
            int x = in.nextInt();

            nums[i] = new int[x];

            System.out.println("Enter " + x + " elements for row " + (i + 1) + ": ");
            for (int j = 0; j < x; j++) {
                nums[i][j] = in.nextInt();
            }
        }

        // Print the jagged array
        System.out.println("\nJagged Array Output:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < nums[i].length; j++) {
                System.out.print(nums[i][j] + " ");
            }
            System.out.println();
        }

        in.close();
    }
}
