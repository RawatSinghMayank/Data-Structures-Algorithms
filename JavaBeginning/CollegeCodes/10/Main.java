import java.util.regex.*;
import java.util.Scanner;

class WordExample {

    private String sentence;

    public WordExample (String sentence){

        sentence = sentence.strip();
        if (sentence.endsWith (".") || sentence.endsWith("?") || sentence.endsWith("!")){
            this.sentence = sentence;
        }
        else {
            throw new IllegalArgumentException ("Sentence must end with .,?,!");
        }

    }

    public WordExample (){
        this ("");
    }

    public void countWord (){

        String []words  = sentence.strip().split("\\s+");

        int wordCount = 0;

        for (String word : words){
            if (startsAndEndsWithVowel (word)){
                wordCount++;
            }
        }

        System.out.println ("Result:" + wordCount);

    }

    public boolean startsAndEndsWithVowel (String word){

        int n = word.length();
        if (isVowel (word.charAt(0)) && isVowel (word.charAt(n-1)))
            return true;
        else 
            return false;
    }

    public boolean isVowel (char ch){
        return "AEIOU".indexOf(ch) != -1;
    }

    void placeWord (){

        StringBuilder vowelWords = new StringBuilder ();
        StringBuffer normalWords = new StringBuffer ();
        String []words = sentence.strip().split("\\s+");

        for (String word : words){
            if (startsAndEndsWithVowel (word)){
                vowelWords.append(word).append(" ");
            }
            else {
                normalWords.append(word).append(" ");
            }
        }

        String result = vowelWords.toString() + normalWords.toString();

        System.out.println (result);
    }
}

public class Main {
    public static void main (String []args){
        Scanner in = new Scanner (System.in);
        String input = in.nextLine();
        WordExample obj = new WordExample (input);

        obj.countWord();
        obj.placeWord();
    }
}

