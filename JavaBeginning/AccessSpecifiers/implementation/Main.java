package implementation;

import first.Student;

 class Main extends Student {

    Main (String name, String course){
        super (name,course);
    }

    public static void main (String []args){

        Main first = new Main ("Mayank Singh Rawat","B.Tech");
        first.getDetails();

    }

}