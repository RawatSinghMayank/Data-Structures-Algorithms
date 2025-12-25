import java.io.*;
import java.util.*;

public class compareTo {

    public static void main(String[] args) {

        Scanner in = new Scanner (System.in);

        String a = in.nextLine();
        String b = in.nextLine();

        System.out.println (a.length() + b.length());

        int diff = a.charAt(0) - b.charAt(0);

        if (a.compareTo (b)> 0){
            System.out.println ("Yes");
        }
        else{
            System.out.println ("No");
        }

        String capatilizeda  = a.substring (0,1).toUpperCase() + a.substring(1);
        String capatilizedb = b.substring (0,1).toUpperCase() + b.substring(1);

        System.out.println (capatilizeda + " " + capatilizedb);

    }}
