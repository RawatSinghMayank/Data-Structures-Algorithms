public class FinalFinallyFinalize {

   private String name;

   public FinalFinallyFinalize(String name){
       this.name = name;
   }

    void display (){
       System.out.println(this.name);
    }
    public static void main (String []args){

       // 1-Final
        // 1.Cannot change values
        //2. To prevent inheritance

        final int num = 10; // always initialize primitive data types with value if they are final
        System.out.println(num);

        final FinalFinallyFinalize obj = new FinalFinallyFinalize("Mayank Singh Rawat");
        obj.name = "TopG";
        // obj = new final ("G"); when a non primitive is final you cannot reassign it

        obj.display();
    }
}
