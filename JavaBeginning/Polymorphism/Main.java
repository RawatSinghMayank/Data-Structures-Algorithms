class Parent {
    // Static method in the Parent class
    static void display() {
        System.out.println("Parent's static display() method");
    }
}

class Child extends Parent {
    // Hides the static method from Parent class
    static void display() {
        System.out.println("Child's static display() method");
    }
}

// Parent class
class Animal {
    public static void makeSound() {  // Overridden method
        System.out.println("Animal makes a sound");
    }
}

// Child class
class Dog extends Animal {
  
	public static void makeSound() {  // Overriding Parent method
        System.out.println("Dog barks");
    }
}

// Another Child class
class Cat extends Animal {
   
    public static void makeSound() {
        System.out.println("Cat meows");
    }
}


public class Main {

    public static void main (String [] args){

        Shape shape = new Shape ();
        Square square = new Square ();
        Circle circle = new Circle ();


        square.area();
        circle.area();
        shape.area();
       

    /*Dynamic Method Dispatch or Runtime Polymorphism in Java
Method overriding is one of the ways in which Java supports Runtime Polymorphism. Dynamic method dispatch is the mechanism by which a call to an overridden method is resolved at run time, rather than compile time.

When an overridden method is called through a superclass reference, Java determines which version(superclass/subclasses) 
of that method is to be executed based upon the type of the object being referred to at the time the call 
occurs. Thus, this determination is made at run time.
At run-time, it depends on the type of the object being referred to (not the type of the reference variable)
 that determines which version of an overridden method will be executed
A superclass reference variable can refer to a subclass object. This is also known as upcasting. Java uses 
this fact to resolve calls to overridden methods at run time. */
        Shape square1 = new Square ();
        Shape circle1 = new Circle();
        square1.greeting();
        square1.area();
        circle1.greeting();
        circle1.area();
// static methos can be i nherited but cannot be overriden
// Hello I am in Shape Class
// I am in Square Class
// Hello I am in Shape Class
// I am in Circle Class

// If a subclass defines a static method with the same signature as a static method in the superclass, 
// then the method in the subclass hides the one in the superclass. This mechanism happens because the 
// static method is resolved at the compile time. Static method bind during the compile time using the 
// type of reference not a type of object.    Shape square1 = new Square ();

    Parent p = new Parent();
        p.display();  // Calls Parent's display()

        Child c = new Child();
        c.display();  // Calls Child's display()

        Parent ref = new Child();
        ref.display();  // Calls Parent's display(), NOT Child's!

        Animal myAnimal;  // Parent class reference

        myAnimal = new Dog();
        myAnimal.makeSound(); 

        myAnimal = new Cat();
        myAnimal.makeSound();  
        /*Animal makes a sound
Animal makes a sound*/
    }

}
Feature	Method Overriding	Runtime Polymorphism
Definition	When a subclass provides its own implementation of a method already defined in the superclass.	A process where method execution is determined at runtime based on the object type.
Requirement	Happens between a superclass and a subclass.	Happens when a superclass reference points to a subclass object.
Polymorphism Type	Enables polymorphism but is not polymorphism itself.	A type of polymorphism that occurs at runtime.
Binding Time	Method is resolved dynamically.	Late binding (method resolution happens at runtime).


method overriding is a key feature that enables polymorphism, but it is not polymorphism itself.

🔹 Method Overriding is when a subclass provides its own implementation of a method that is already defined in its superclass.

🔹 Polymorphism (meaning "many forms") allows a single method call to behave differently based on the object's actual type. Overriding enables runtime polymorphism, where method resolution happens at runtime.