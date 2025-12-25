import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class LexicographicalSmallestAndLargestSubstring {

       static  String getSmallestAndLargest1 (String str, int k){

            ArrayList<String> allSubstrings = new ArrayList<>();

            for (int i = 0; i <= str.length() - k; i++){
                String substr = str.substring (i,i + k);
                allSubstrings.add (substr);
            }

            Collections.sort (allSubstrings);
            return allSubstrings.get(0) + "\n" + allSubstrings.get (allSubstrings.size() -1);
        }

    public static String getSmallestAndLargest2 (String s, int k) {
        String smallest = s.substring(0, k);
        String largest = s.substring(0, k);

        // Iterate through the string to extract all substrings of length k
        for (int i = 1; i <= s.length() - k; i++) {
            String substring = s.substring(i, i + k);

            // Update smallest and largest based on lexicographic comparison
            if (substring.compareTo(smallest) < 0) {
                smallest = substring;
            }
            if (substring.compareTo(largest) > 0) {
                largest = substring;
            }
        }

        return smallest + "\n" + largest;
    }

        public static void main(String[] args) {

            Scanner in = new Scanner (System.in);
            String s  = in.nextLine();
            int k = in.nextInt();

            System.out.println (getSmallestAndLargest2(s,k));
        }
}

