public class Circle extends Shape {

      static void greeting (){
        System.out.println ("Hello I am in Circle Class");
    }
    // this will run when obj of Shape class is created 
    // hence it is overriding the parent class
    void area (){
        System.out.println ("I am in Circle Class ");
    }
    //Constructor overloading is a form of compile-time (or static) polymorphism in Java.

}