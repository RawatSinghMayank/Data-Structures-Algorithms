public class GoodConstructor {

    private int x;
    private int y;
    private int width;
    private int breadth;

    // 1st
    public GoodConstructor (){
        this (0,0); // calls second constructor
    }

    // 2nd
    public GoodConstructor(int width , int breadth){

            this (0,0,width,breadth); // calls 3rd constructor
    }
// 3rd
    public GoodConstructor (int x ,int y , int width, int breadth){
        this.x = x;
        this.y = y;
        this. width = width;
        this.breadth = breadth;
    }

    public static void main (String []args){

    }

}
