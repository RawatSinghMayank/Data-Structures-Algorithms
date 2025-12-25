public class Shape {

    static void greeting (){
        System.out.println ("Hello I am in Shape Class");
    }

    void area (){
        System.out.println ("I am in Shape Class ");
    }
    // Early Binding: The binding which can be resolved at compile time by the compiler is known as static or early binding. Binding of all the static, private and final methods is done at compile-time. 
    //Constructor overloading is a form of compile-time (or static) polymorphism in Java.

    // final void area (){     cannot override

    //     System.out.println ("I am in Shape Class ");

    // }

}