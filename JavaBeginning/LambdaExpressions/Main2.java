
interface A {
    void show (int i, int j);
}

public class Main2 {

    public static void main (String []args){


        A obj = (int i, int j) -> {

            System.out.println ("G number " + i + j);
        };
        

        obj.show(5 , 1);
    }
}