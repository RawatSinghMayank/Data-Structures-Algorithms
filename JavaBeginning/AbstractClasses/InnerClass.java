 class Outer {

    String outerName = "Outer Class";

    // Inner class (non-static)
    class Inner {
        void display() {
            System.out.println("Accessing outer class variable: " + outerName);
        }
    }

   static  class Inner2 {
        void display() {
            System.out.println("Accessing outer class variable: ");
        }
    }

    public static void main(String[] args) {
        
        Outer obj = new Outer ();
        System.out.println (obj.outerName);

        Outer.Inner x = obj.new Inner();        
        x.display();

        Outer.Inner2 y = new Outer.Inner2();
        y.display();
    }
}
