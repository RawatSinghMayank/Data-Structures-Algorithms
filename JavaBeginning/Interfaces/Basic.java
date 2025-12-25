
interface A {


    public  static final int age = 20;
    String name = "mayank";
     void show (); // in interface methods are public abstarct by default
    public abstract void pro ();
}
// interface says i will tell you what are the methods u need but it's your job to implement if(means class have to implementh this)

class B implements A {
    
    public void show (){
        System.out.println ("G");
    }

    public void pro (){

    }
}

public class Basic {
    public static void main (String []args){
      // we are not creating object of interface it is just a reference actulaly object is created of class b
      // 
        A obj = new B();

        obj.show();
        System.out.println (obj.name);
    }
}
/*Why Interfaces Have Only public, abstract Methods and static final Variables
✅ Why are methods in interfaces public and abstract?

- An interface is like a contract that defines what should be done, not how.
- `abstract`: Methods in interfaces have no body; they are meant to be implemented by classes.
- `public`: So the implementing classes can access and implement them.
- Java implicitly adds `public abstract` to interface methods.

Example:
interface Animal {
    void speak(); // implicitly public and abstract
}

✅ Why are variables in interfaces public static final?

- Variables in interfaces act as constants.
- `public`: So any class can access them.
- `static`: Belong to the interface, not any instance.
- `final`: Can’t be changed – ensures immutability.

Example:
interface Constants {
    int MAX_USERS = 100; // implicitly public static final
}

✅ Summary Table

| Feature   | Modifier        | Why                                      |
|-----------|----------------|------------------------------------------|
| Method    | public          | So it can be implemented by classes      |
| Method    | abstract        | No body; must be implemented             |
| Variable  | public          | So it’s accessible                       |
| Variable  | static          | Belongs to the interface, not instances  |
| Variable  | final           | Can’t be changed – it’s a constant       |

📚 Trusted Resources

- Oracle Java Docs – Interfaces: https://docs.oracle.com/javase/tutorial/java/IandI/interfaceDef.html
- GeeksForGeeks – Interface in Java: https://www.geeksforgeeks.org/interfaces-in-java/
- Baeldung – Java Interfaces: https://www.baeldung.com/java-interfaces

 */