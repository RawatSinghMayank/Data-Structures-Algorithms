abstract class Demo {

    public void show (){
        System.out.println ("In Demo show");
    }
}

class Main {

    public static void main (String []args){
        
        // This is not the object of abstract class this is the object of anonymous class implemented right here
        Demo obj = new Demo(){
            // anonymous class in helpful when we require the task to perform only one time 
            public void show (){
                System.out.println ("In anonymous class");
            }

        };

        obj.show();
    }
}