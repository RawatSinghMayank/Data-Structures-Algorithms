// Lamda expressiong only works with FunctionalInterface 
// becuase if we have more than one functiosn then which 
// function we are usign in lamda 

interface A {
    int add (int i, int j);
}

public class Main3 {

    public static void main (String []args){


        // A obj = (int i, int j) -> {
        //     return i + j;
        // };
        
        // more short code 
        A obj = (i,j) ->  i + j;

        System.out.println (obj.add(5,3));
    }
}