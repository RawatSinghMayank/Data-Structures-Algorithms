public class Anonymous {
/* Anonymous simply means nameless. An object which has no reference is known as an anonymous object. It can be used at the time of object creation only.

If we have to use an object only once, an anonymous object is a good approach. For example:*/
    int fact (int n){
        int fact = 1;
        for (int i = 1; i <= n; i++){
            fact *= i;
        }
        return fact;
    }

    public static  void main (String args[]){

        System.out.println (new Anonymous().fact(5));
    }
}
