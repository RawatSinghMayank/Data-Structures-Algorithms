class A {

    public void show() {
    }
}

class B extends A {
    public void show1() {

    }
}

class Main {

    public static void main (String []args){

    A obj = (A)new B ();
    B x =(B)obj;
    }

}