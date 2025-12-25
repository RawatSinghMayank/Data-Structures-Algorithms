import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Student {
    
    public int age;
    public String name;

    Student (int age, String name){
        this.age = age;
        this.name = name;
    }
}

class mySort implements Comparator <Student> {

    public int compare (Student obj1, Student obj2){

        if (obj1.age > obj2.age) return 1;
        else return -1;
    }

}

public class Students {
    public static void main (String []args){

        ArrayList <Student> obj = new ArrayList <Student>();

        obj.add (new Student (43,"Mayank"));
        obj.add (new Student (3,"Singh"));
        obj.add (new Student (2434,"Rawat"));
        obj.add (new Student (243,"isG"));

        //mySort  c = new mySort ();
        // Both work 
        Comparator <Student> c = new mySort();
        Collections.sort (obj,c);

        for (Student x : obj)
        System.out.println (x.name);
        

    }
}