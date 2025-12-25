import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;
 class Main2 {
    
    public static void main (String []args){

        
        InputStreamReader in = new InputStreamReader (System.in);
        BufferedReader bf = new BufferedReader (in); 

        // BufferedRedaer constructor need InputStreamReader object
        //INputStreamRedaer constrcutor need InputStream object
        // System class has field name as public static final InputStream in;
        // static so we can directly write System.in and pass it to INputSTreamReader like above
        try {
        int x = Integer.parseInt (bf.readLine());

        System.out.println (x);
        }
        catch (IOException e){
            System.out.println ("INput output error");
        }
        catch (NumberFormatException e){
            System.out.println ("Please enter a valid number");
        }

        bf.close();
    }    
}