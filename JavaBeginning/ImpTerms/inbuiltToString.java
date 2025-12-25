public class inbuiltToString {

    private String name;
    private int age;

    inbuiltToString (String name, int age){
        this.name = name;
        this.age = age;
    }

    @Override
    public String toString(){
        return name;
    }
    public static void main (String []args){

        inbuiltToString obj = new inbuiltToString ("Mayank",21);
        System.out.println(obj);//inbuiltToString@372f7a8d

        //Reason: By default, every Java class inherits from Object, which has a toString() method:
// public String toString() {
//     return getClass().getName() + "@" + Integer.toHexString(hashCode());
// }
// In Java, you can convert an object to a string using the toString() method, which is a method of the Object class. It returns a string that represents the object.

// We can also use the String.valueOf() method to convert an object to a string in Java. This method is a static method of the String class that takes an object as a parameter and returns a string that represents the object.

// Introduction
// The Object class is the superclass of all other classes in Java. It implies that a reference variable of Object type can refer to an instance of any other class. Every class in Java inherits methods of the Object class implicitly.

// In Java, you can convert an object to a string using the toString() method, which is a method of the Object class
    }
}