class MyException extends Exception {

     MyException (String str){
        super (str);
    }
}

public class Main {
    public static void main (String []args){

        int x = 10, y = 0;

        try {
            if (y == 0)
                throw new MyException ("My class exception ");
            System.out.println (x/y);
        }

        catch (MyException e){
            System.out.println (e);
        }
    }
}