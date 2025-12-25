 class Main {

    public static void main (String []args){

        String x = "topG"; //By string literal

        /* ach time you create a string literal, the JVM checks the "string constant pool" first. If the string already exists in the pool, a reference to the pooled instance is returned. If the string doesn't exist in the pool, a new string instance is created and placed in the pool. For example:

String s1="Welcome";  
String s2="Welcome";//It doesn't create a new instance  */
        String y = "topG";//By new keyword

        if (x == y)  System.out.println ("G");
        else System.out.println ("NoG");

        String a = new String ("mayankisG");
        String b = new String ("mayankisG");

        
        if (a == b)  System.out.println ("G");
        else System.out.println ("NoG");

        boolean fuc = a.equals (b);
        System.out.println (fuc);
        b = a;
           
        if (a == b)  System.out.println ("G");
        else System.out.println ("NoG");


    }
}