class Box {

    private int l;
    public int b;
    public int h;

    Box (int l , int b, int h){
        super(); // Every class inherits from Object Class
        this.l = l;
        this.b = b;
        this.h =h;
        System.out.println ("Parent class constrcutor ");
    }

    Box (){
        this (0,0,0);
    }

    Box (Box old){
        this. l = old.l;
        this.b = old.b;
        this.h = old.h;
    }
}

class BoxWeight extends Box{

    int w;
    BoxWeight (int l, int b, int h, int w){
        super (l,b,h);
        this.w = w;
        System.out.println ("Child class constructor ");
    }

    BoxWeight (BoxWeight other){
        super (other);
        this.w = other.w;
    }
}
   
public class ConceptOfParentObject {

    public static void main (String []args){

        BoxWeight box1 = new BoxWeight(2,3,4,5);

        Box box2 = new BoxWeight (1,2,3,4);
        System.out.println (box2.b);
      //  System.out.println (box2.w); It is the type of reference variables not the type of object
    // that determines what members can be accessed
   
//     BoxWeight obj = new Box (1,2,3);
// . A parent class object cannot be assigned to a child class reference, as it does not have the additional attributes (w in this case).
    }
}