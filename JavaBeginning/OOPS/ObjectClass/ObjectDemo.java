class ObjectDemo extends Object {
    
    String  name;
    int age;

    ObjectDemo (String name, int age){
        this.name = name;
        this.age = age;
    }


    public boolean equals (ObjectDemo obj){

        if (this.name.equals (obj.name) && this.age == obj.age) return true;
        else return false;    
    }

    @Override 
    public int hashCode (){
        return 9530;
    }
}

class Main {
    public static void main (String []args){

        ObjectDemo obj1 = new ObjectDemo ("Mayank",21);
        ObjectDemo obj2 = new ObjectDemo ("Mayank",21);

        boolean check = obj1.equals(obj2);
        System.out.println (check); // false 
        /*You're getting false from obj1.equals(obj2) because you haven't overridden the .equals() method in your ObjectDemo class.

🔍 Explanation:
In Java, the default equals() method is inherited from the Object class, and it works like this:

java
Copy
Edit
public boolean equals(Object obj) {
    return (this == obj);
} */
    System.out.println(obj1.hashCode());
    }
}