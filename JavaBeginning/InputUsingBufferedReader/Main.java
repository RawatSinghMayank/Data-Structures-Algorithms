public class Main {

    public static void main (String [] args){

       try {
         int x = System.in.read();
        System.out.println (x);
        if (x == -1) throw new Exception ("g");
    }
    catch (Exception e){
        System.out.println ("Input not provided" + e);
    }
    // it's take single char and gives it ascii code 
    // checked exception so need for throw
   
}
}