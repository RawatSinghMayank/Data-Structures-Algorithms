public class ChildClass extends ParentClass{

    public void start(){
        System.out.println("child class --start method");
    }
    public  static void main (String args[]){
        ChildClass obj = new ChildClass();
        obj.start();
    }
}
