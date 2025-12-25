// Thread is a class which Implements Runnable  
// public class Thread implements Runnable 

// FunctionalInterface
// public interface Runnable {
//     void run
// }

class A implements Runnable {

    public void run (){
        
        for (int i = 0; i < 100; i++){
            System.out.print ("A Thread" + " ");
            try {
                Thread.sleep(10);
            }
            catch(InterruptedException e) {
                e.printStackTrace();
            }
        }
         System.out.println();
    }
   
}

class B implements Runnable {

    public void run (){
        
        for (int i = 0; i < 100; i++){
            System.out.print("B Thread" + " ");

            try {
                Thread.sleep(10);
            }
            catch (InterruptedException e ){
                e.printStackTrace();
            }
         System.out.println();
    }
   
    }
}

public class RunnablePractice{
    public static void main (String []args){
        Runnable obj1 = new A();
        Runnable obj2 = new B();

        // minimum priority is 1 and higest is 10
        // 5 is defualt priority

     
        Thread t1 = new Thread (obj1);
        Thread t2 = new Thread (obj2);

        t1.start();
        t2.start();
    }
}