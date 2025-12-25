
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

class Main2{

    public static void main (String []args){

        BufferedReader br = new BufferedReader (new InputStreamReader (System.in));


        try {
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
        finally {
            try {
                br.close();
                System.out.println  ("closed successfully");
            }
            catch (IOException e){
                System.out.println("Error closing BufferedRedaer" + e);
            }
        }
    }
}