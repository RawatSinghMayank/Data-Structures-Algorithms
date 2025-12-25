enum Week {

    Monday(1), Tuesday (2), Wednesday (3), Thursday(4),Friday(5),Saturday(6),Sunday(0);

    private int day; // private becuase we are createing the objects in the same class
    Week (int day){
        this.day = day;
    } 

    Week (){

    }

    public int getDay (){
        return this.day;
    }

}

public class Main2{

    public static void main (String []args){
        
        for (Week arr: Week.values()){
            System.out.println (arr  + " " + arr.getDay());
        }
    }
}