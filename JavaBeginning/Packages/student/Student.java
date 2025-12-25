package student;

public class Student {
    
    private String studentName;
    private  int studentAge;
    private  int studentId;

    public Student (String studentName, int studentAge, int studentId){
        this.studentName = studentName;
        this.studentAge = studentAge;
        this.studentId = studentId;
    }

    public Student (){
        this ("",0,0);
    }

    public String getStudentInfo (){
        return "Student Name : " + this.studentName + "  Student Age : " + this.studentAge + "  Student Id: " + this.studentId ;
    }
}