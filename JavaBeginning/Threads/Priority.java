class A extends Thread {

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

class B extends Thread {

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

public class Priority {
    public static void main (String []args){
        A obj1 = new A();
        B obj2 = new B();

        // minimum priority is 1 and higest is 10
        // 5 is defualt priority

        System.out.println (obj1.getPriority());
        obj2.setPriority (Thread.MAX_PRIORITY);
        System.out.println (obj2.getPriority());
        obj1.start();
        obj2.start();
    }
}