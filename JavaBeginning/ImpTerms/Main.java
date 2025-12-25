public class Main extends Human {

    public Main (String name,int age , boolean married){
        super (name, age, married);
    }
    public Main (){ 
        super ("",0,false);
    }

    public static void main (String [] args){
        Human mayank = new Human ("Mayank",21,false);
        Human kunal = new Human ("Kunal ",22,true);
        // Static variables are not dependent on objects.If you do not creat objects u can still access static variables
        // They are not dependent on objects.
        System.out.println(mayank.population);
        System.out.println(kunal.population);
        System.out.println(Human.population);
        // greeting(); Error: static method main can only access static data
        // and greeting is not static

        // here I am referencing it or creating an object
        Main obj  = new Main();
        obj.greeting();
        Main fun = new Main();
        fun.fun2();
    }

    // we know that something that is not static ,belongs to an object
    void greeting (){
        System.out.println("Hello G");
    }

    void fun2(){
            greeting();
            // We know that it will be definitely called inside a static function that
            // is main and fun2() object will be created.
    }
    static void funn (){
     //   greeting(); you cannot use it becuase it required an instance but the function you are using it 
    //  does not depend on instances
    // you can not accesss a non static stuff without referencing theie instances in a static context

        Main obj = new Main();
        obj.greeting();
    }
}
