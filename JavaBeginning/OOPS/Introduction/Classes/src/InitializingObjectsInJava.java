class Student {

    int id;
    String name;

    void setRecord (int id , String name){
        this.id = id;
        this.name = name;
    }
}


public class InitializingObjectsInJava {

    public static void main(String args[]) {

        Student obj1 = new Student();
        obj1.id = 101;
        obj1.name = "Mayank Singh Rawat"; // Object Initialization through Reference Variable
        System.out.println (obj1.id);
        Student obj2 = new Student();
        obj2.setRecord(1,""); // Object Initialization through Method
        // last one we know thorugh constructor
    }
}






