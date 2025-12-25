enum Status {
    Running,Failed, Pending,Success; // group of constants and they are public static final object
}

public class Main {
    public static void main (String []args){

        Status s = Status.Running;
        System.out.println (s);

        Status [] arr = Status.values();

        for (Status values : arr){
            System.out.println (values);
        }
    }
}
/* Java, the enum (short for enumeration) is a special type of class  that enables a variable to be a set of predefined constants. It’s used when you have a fixed set of related values, like days of the week, directions, or states.

🔹 Why Use enum in Java?
✅ To define a fixed set of constants in a type-safe way

✅ To improve code readability, maintainability, and type safety */