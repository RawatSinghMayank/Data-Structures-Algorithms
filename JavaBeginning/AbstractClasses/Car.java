abstract class FastCar {

    abstract void drive();
    void playMusic (){
        System.out.println ("Fair Trade");
    }
    // abstract classes can have all non- abstract methods 
    // abstract classes can have all abstract methods
    // abstarct classes can  have both abstract and non abstract methods

}

class BMW extends FastCar {

    void drive (){
        System.out.println ("250kmph");
    }

}

public class Car {
    public static void main (String []args){
        FastCar obj = new BMW (); // cannot create objecyt of abstract classes it's just a reference object is created of child class here

        obj.drive();
        obj.playMusic();
    }
}