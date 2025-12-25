public class PrivateConstructor {

    String name;
    int age;

    protected PrivateConstructor (String name, int age){
        this.name = name;
        this. age = age;
    }

    protected PrivateConstructor (){
       this ("",0);
    }

    void display(){
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
    }
}
