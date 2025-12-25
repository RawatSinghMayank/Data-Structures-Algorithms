package enrollment;

import student.Student;
import course.Course;

public class Enrollment {
    
     private Student student;
     private Course course;

    public Enrollment (Student student , Course course ){
        this.student = student;
        this.course = course;
    }

    public Enrollment (){}

    public String getEnrollmentInfo (){
        return  "Enrollment Info : " + this.student.getStudentInfo() + "\n"  + this.course.getCourseInfo();
    }
}


