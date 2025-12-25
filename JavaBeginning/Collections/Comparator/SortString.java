import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

 class mySort implements Comparator <String> {

	public int compare(String first, String second) {
    // Compare lengths
    if (first.length() > second.length()) return 1;   // put second before first
    else if (first.length() < second.length()) return -1; // keep first before second
    else return 0; // equal, don't change
}

}


public class SortString {

    public static void main (String []args){

    ArrayList <String> words = new   ArrayList <String> ();
	words.add ("Mayank Singh Rawat");
	words.add ("TopG");
	words.add ("IamBackMotherfucker");
	words.add ("Sometimes you have to go war with yourself");
    words.add ("M");
    words.add ("M");

	Comparator <String> obj = new mySort ();
	Collections.sort (words,obj);

	System.out.println (words);

    }
}