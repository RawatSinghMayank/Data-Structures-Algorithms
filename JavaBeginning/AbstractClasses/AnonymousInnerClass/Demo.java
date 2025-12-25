
class Demo {

    public void show (){
        System.out.println ("In Demo show");
    }
}

class Main {

    public static void main (String []args){
        
        Demo obj = new Demo() { // Inner class becuase inside Main class and no name so called as anonymous 
        // 

            public void show (){
                System.out.println ("In new Show");
            }
        };

        obj.show();
    }
}