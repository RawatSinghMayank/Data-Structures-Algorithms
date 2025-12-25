public class Main{

    public static void main (String[] args){
        // error by default it is double float myFloatValue = 10.23;

        float myFloatValue = 10.23f;
        double myDoubleValue = 10d;

        char myChar = '\u00A9';
        System.out.println("Unicode output is : " + myChar);

        String myString = "Hi! I am Mayank Singh Rawat";
        myString += ", I  am currently learning Java";
        myString += ", \u00A9 ";
        System.out.println("Modified String is : " + myString);

        double ele = 23.32;
        int x = 100;
        myString += ele + x;
        System.out.println("Concatenation : " + myString);
        // String is not a primitive data type ,It is a Class ,Just it's syntax is made easy in Java
    }
}