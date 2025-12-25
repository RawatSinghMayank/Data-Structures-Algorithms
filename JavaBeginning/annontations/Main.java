//Annotations are special markers or tags in Java that are used to give instructions to the compiler, runtime, or frameworks like Spring, Hibernate, etc.
// like we do in @Override

// only one abstract method
@FunctionalInterface
interface A{

    void show();
}

public class Main {

    public static void main (String []args){

        A obj = new A(){

            public void show (){
                System.out.println ("Show");
            }
        };
        
        obj.show();
    }
}