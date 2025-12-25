public class StaticClassInsideAnother {

     class InnerClass{

        String name;

        public InnerClass (String name){
            this.name = name;
        }

    }

    public static void main (String []args){

        StaticClassInsideAnother obj = new StaticClassInsideAnother();
        InnerClass obj1 = obj.new InnerClass("Mayank");
        InnerClass obj2 = obj.new InnerClass("TopG");
// use static otherwise 
// like static class InnerClass above


// System: This is the final class that is defined in java.lang package. 
// out: This is an instance of PrintStream type, and the access specifiers are final and public. 
// println(): This is a method in the PrintStream class.
//https://www.naukri.com/code360/library/system-out-println-in-java
    }
}