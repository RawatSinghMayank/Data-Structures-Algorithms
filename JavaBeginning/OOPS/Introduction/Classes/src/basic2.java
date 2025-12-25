public class basic2 {

    String x;
    int age;

    basic2(String x,int age){
        this.x = x;
        this.age = age;
    }

    public static  void main (String []args){

        basic2 obj1 = new basic2("G",21);
        basic2 obj2 = obj1;
        System.out.println(obj1);
        System.out.println(obj2);
    }
}
