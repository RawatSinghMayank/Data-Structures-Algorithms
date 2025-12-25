public class Constructor {

        private int Wheels;
        private int doors;

    public Constructor (){
        this.Wheels = 0;
        this.doors = 0;
        System.out.println ("Empty constructor called");
    }
    public Constructor(int Wheels, int doors) {
            this.Wheels = Wheels;
            this.doors = doors;
            System.out.println ("Two args constructor called");
    }

    public Constructor (int Wheels){
        this (2,0); // It is calling two args constructor
        System.out.println("One args constructor called");
    }

    int getWheels (){
        return this.Wheels;
    }

    int getDoors (){
        return this.doors;
    }
    public static void main (String [] args){
        Constructor obj = new Constructor(2,2);
        Constructor object = new Constructor (2);
        Constructor check = new Constructor();
        System.out.println(object.getWheels());
        System.out.println(object.getDoors());
        System.out.println (obj.getWheels());
        System.out.println(obj.getWheels());
    }
}
