

class MyException extends Exception  {

    MyException (String str){
        super (str);
    }
    public void show () throws ClassNotFoundException{
    //     try {
    //         Class.forName ("dfkd");
    //     }
    //     catch (ClassNotFoundException e){
    //         System.out.println (e);
    //     }
    
    Class.forName ("djfkd");
    }
}


public class DucklingException {
    public static void main (String []args){


        try {
            MyException obj = new MyException("Custom Exception");
            obj.show();          
        }

        catch (ClassNotFoundException e){
            System.out.println(e);
        }
    
    

    }

}