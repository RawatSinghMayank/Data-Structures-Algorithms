
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

class MainX{

    public static void main (String []args){



        try (BufferedReader br = new BufferedReader (new InputStreamReader (System.in))){
           int  num = Integer.parseInt(br.readLine());
            System.out.println (num);
            throw new IOException ("Enter valid number");
        }
        
        catch (IOException e){
            System.out.println (e);
        }
        catch (Exception e){
            System.out.println("Don't know");
        }
        
        //try with resources automatically closes recources .So no need of finally
    }
}