import java.util.ArrayList;
import java.util.Collections;
import java.util.Map;
import java.util.HashMap;
import java.util.Hashtable;

public class Main {

    public static void main (String []args){
  
        Map <String,Integer> stu = new HashMap <>();
        //  Map <String,Integer> stu = new Hashtable <>();
        // works almots same ,hastable is synchronized and hashmap is not synchronized
        stu.put("Mayank",1);
        stu.put("Pankaj",2);

        System.out.println (stu);
        System.out.println (stu.get("Mayank"));
    }
}