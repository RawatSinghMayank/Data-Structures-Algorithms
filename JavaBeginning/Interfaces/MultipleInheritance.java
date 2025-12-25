
interface A {

    public abstract void show ();
}

interface B extends A {

    public  abstract void show1 ();
}

interface C extends A {

    public abstract void show2 ();
}

class G implements B,C {
    
    public void show (){
        System.out.println ("TopG");
    }

    public void show1() {
        System.out.println ("BottomG");
    }

    public void show2(){
        System.out.println ("G");
    }

}

class Main {
    public static void main (String []args){

        G obj = new G();
        B obj2 = new G();
        obj.show();
        obj.show1();
        obj.show2();
    }
}