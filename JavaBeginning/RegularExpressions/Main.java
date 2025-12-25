// [abc]       A single character of: a, b or c  
// [a-z]       A single character in a range: a to z  
// a|b         Match either a or b  
// \d          A digit: [0-9]  
// \w          A word character: [a-zA-Z_0-9]  
// .           Any single character  
// a{3}        Exactly 3 of a: aaa  
// a{3,}       3 or more of a  
// a{2,4}      Between 2 or 4 of a: aa, aaa or aaaa  
// ^           The beginning of a line  
// $           The end of a line  
// *           Matches zero or more occurrences  
// +           Matches one or more occurrences  
// ?           Matches zero or one occurrence

import java.util.regex.Matcher;
import java.util.regex.Pattern;

import java.util.regex.*;
public class Main {

    public static void main (String []args){

       Pattern pattern = Pattern.compile ("[a-z]+\\d{3}"); //[a-z]+\\d\\d\\d
       Matcher matcher = pattern.matcher ("mayank101");

        if(matcher.find ()){
            System.out.println ("Found");
        }
        else {
            System.out.println ("Not Found");
        }


        
    }
}