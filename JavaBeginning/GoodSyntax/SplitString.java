import java.util.ArrayList;
import java.util.Scanner;

public class SplitString {

    /*

INPUT:    He is a very very good boy, isn't he?

Sample Output
10
He
is  
a
very
very
good
boy
isn
t
he

*/

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);

        String myString = in.nextLine();
        ArrayList <String> words = new ArrayList<>();
        for (int i = 0; i < myString.length(); i++) {

            char ch = myString.charAt(i);
            String temp = "";
            while (i < myString.length() && (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                temp += ch;
                i++;
                if (i < myString.length())
                    ch = myString.charAt(i);
            }

            if (!temp.isEmpty())
                words.add(temp);

        }
        System.out.println(words.size());
        for (String word : words) {
            System.out.println(word);
        }


        /*


        import java.io.*;

import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read input string
        String s = scanner.nextLine().trim();
        if (s.isEmpty()){
            System.out.println(0);
            return;
        }
        // Use regex to split on non-alphabetic characters
        String[] tokens = s.trim().split("[^A-Za-z]+");

        // Print number of tokens
        System.out.println(tokens.length);

        // Print each token
        for (String token : tokens) {
            if (!token.isEmpty()) {  // Avoid empty strings in output
                System.out.println(token);
            }
        }

        scanner.close();
    }
}
 */
    }
}