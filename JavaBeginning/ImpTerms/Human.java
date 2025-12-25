public class Human {

    private String name;
    private int age;
    private boolean married;
    public static int population;

    public Human (String name, int age, boolean married){
    this.name = name;
    this.age = age;
    this.married = married;
    // this will also work but below one is much better and convention this.population += 1;
    Human.population += 1;
    }


}