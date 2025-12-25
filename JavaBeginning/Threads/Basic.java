class A extends Thread {

    public void run (){
        
        for (int i = 0; i < 100; i++){
            System.out.print (5 + " ");
        }
         System.out.println();
    }
   
}

class B extends Thread {

    public void run (){
        
        for (int i = 0; i < 100; i++){
            System.out.print(10 + " ");
        }
         System.out.println();
    }
   
}


public class Basic {
    public static void main (String []args){
        A obj1 = new A();
        B obj2 = new B();

        obj1.start();
        obj2.start();
    }
}