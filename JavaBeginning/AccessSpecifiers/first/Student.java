package first;

public  class Student {

     protected String name;
     protected String course;

      protected Student (String name,String course){
        this.name =  name;
        this.course = course;
    }

      protected void getDetails(){
        System.out.println ("Name: " + this.name);
        System.out.println ("Course: " + this.course);
    }

}
