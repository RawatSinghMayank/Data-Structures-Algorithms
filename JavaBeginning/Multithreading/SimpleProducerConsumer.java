class Buffer{
    int data;
    boolean isEmpty=true;

    public synchronized void produce(int value){
        while(!isEmpty){
            try {
                wait();//wait if buffer is not empty
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        data=value;
        System.out.println("Producer porduced: "+data);
        isEmpty=false;
        notify();//notify customer
    }
    public synchronized void consume(){
        while(isEmpty){
            try {
                wait();//wait if buffer is not empty
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        System.out.println("Consumer Consumed: "+data);
        isEmpty=true;
        notify();//notify producer
    }
}

class Producer extends Thread{
    Buffer buffer;

    public Producer(Buffer buffer){
        this.buffer=buffer;
    }

    public void run(){
        for(int i=0;i<=5;i++){
            buffer.produce(i);
            try {
                Thread.sleep(500);//Delay for clarity
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class Consumer extends Thread{
    Buffer buffer;

    public Consumer(Buffer buffer){
        this.buffer=buffer;
    }

    public void run(){
        for(int i=0;i<=5;i++){
            buffer.consume();
            try {
                Thread.sleep(500);//Delay for clarity
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class SimpleProducerConsumer {
    public static void main (String []args){
        Buffer sharedBuffer = new Buffer();
        Producer p = new Producer (sharedBuffer);
        Consumer c = new Consumer (sharedBuffer);

        p.start();
        c.start();
    }
}
