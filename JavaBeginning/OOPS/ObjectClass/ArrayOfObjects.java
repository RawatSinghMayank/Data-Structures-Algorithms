class Student {

    String name;
    int age;

    Student (String name, int age){
        this.name = name;
        this.age = age;
    }

}

 class Main {
    public static void main (String []args){
        Student obj1 = new Student ("Mayank",21); 
        Student obj2 = new Student ("TopG",21);

        Student student[] = new Student[2];
        student[0] = obj1;
        student[1] = obj2;

        for (Student stu : student){
            System.out.println (stu);
        }
    }
}