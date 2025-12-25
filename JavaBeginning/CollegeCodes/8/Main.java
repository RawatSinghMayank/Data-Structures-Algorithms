// import java.io.BufferedReader;
// import java.io.InputStreamReader;
// import java.io.IOException;

// public class Main {

//     public static int   patternCount(String S) 
//     { 
//         int n = S.length(); 

//         int last = S[0], count = 0, i = 1;

//         while (i < n){
//             if (S.charAt (i) == '0'){

//                 while (i < n && S.charAt (i) == '0') i++;

//                 if (S.charAt(i) == '1'){ last = S[i], count++;}

//             }
//             else i++;
//         }

//     return count;

// }
//     public static void main (String []args) throws Exception {

//         BufferedReader in = new BufferedReader (new InputStreamReader (System.in));

//         String str = in.readLine();

//         System.out.println (patternCount (str));

        
//     }
// }

public class Main {

    // Function to count the number of patterns in a string.
    // Pattern: "1...0...1" with one or more 0s between two 1s.
    public static  int patternCount(String S) {
        // Variable to store the last character
       int n = S.length(), i = 1, count = 0;
        
        char last = S.charAt(0);
         
         while (i < n){
             if (last == '1' && S.charAt(i) == '0'){
                 
                 while (i < n && S.charAt(i) == '0' ){
                     i++;
                     
                 }
                 if (i < n && S.charAt(i) == '1') count++;
             }
             else {
                 last = S.charAt(i);
                 i++;
             }
         }
         return count;
    }

    // Main method for testing
    public static void main(String[] args) {
      
        String S = "100000"; // Example input
        int result = patternCount(S);
        System.out.println("Number of patterns: " + result);
    }
}
