public class BadConstructor {

    private int x;
    private int y;
    private int width;
    private int breadth;

    public BadConstructor (){
        this.x = 0;
        this.y = 0;
        this.width = 0;
        this.breadth = 0;
    }

    public BadConstructor(int width , int breadth){
        this.x = 0;
        this.y = 0;
        this.width = width;
        this.breadth = breadth;
    }

    public BadConstructor (int x ,int y , int width, int breadth){
        this.x = x;
        this.y = y;
        this. width = width;
        this.breadth = breadth;
    }


    public static void main (String []args){

    }
}
