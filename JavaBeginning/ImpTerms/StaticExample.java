public class StaticExample{

    static int x = 10;
    static int y;

    static {
        System.out.println ("My static block");
         y = 2 * x;
    }
//This code inside the static block is executed only once: the first time the class is loaded into memory. 
    public static void main (String args[]){

        StaticExample obj1 = new StaticExample ();
        System.out.println (obj1.x + " " + obj1.y);

        obj1.y += 2;
        System.out.println (obj1.x + " " + obj1.y);

        StaticExample obj2 = new StaticExample ();
        System.out.println (obj2.x + " " + obj2.y);


    }

}