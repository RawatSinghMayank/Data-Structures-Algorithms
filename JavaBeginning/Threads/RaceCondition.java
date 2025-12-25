//Thread Safe-only one thread can work with that at one time
//Immutable objects are by default thread-safe because their state can not be modified once created. Since String is immutable in Java, it's inherently \
// thread-safe.
//As we know Java has a feature, Multithreading, which is a process of 
// running multiple threads simultaneously. When multiple threads are working
//  on the same data, and the value of our data is changing, that scenario is 
// not thread-safe and we will get inconsistent results. When a thread is already
//  working on an object and preventing another thread on working on the same 
// object, this process is called Thread-Safety. 


class Counter {
	
	int count;
	public synchronized void increment (){
		count++;
	}
}
//If both threads read the same value before one writes it back, one increment can be lost. This is a classic example //of a race condition.
public class practiceJava {

    public static void main (String []args){

	Counter c =  new Counter ();
        Runnable obj1 = () -> {

            for (int i = 0; i < 10000; i++){
                c.increment();

                   }
        };


        Runnable obj2 = () -> {

            for (int i = 0; i < 10000; i++){
                
		c.increment();
                
               }
        };

        Thread t1 = new Thread (obj1);
        Thread t2 = new Thread (obj2);

        t1.start();
        t2.start();
	
	try {
	t1.join();
	} catch (Exception e){
		System.out.println (e);
	}

	try {
	t2.join();
	} catch (Exception e){
		System.out.println (e);
	}
	System.out.println (c.count);
    }
}