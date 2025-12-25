
import student.Student;
import enrollment.Enrollment;
import course.Course;

public class Main {

    public static void main (String []args){

        Student student = new Student("Mayank Singh Rawat" , 20,23011119);
        Course course = new Course(403,"Microprocessor",3);
        Enrollment enrollment =  new Enrollment(student,course);

        System.out.println (student.getStudentInfo());
        System.out.println (course.getCourseInfo());
        System.out.println(enrollment.getEnrollmentInfo());

    }
}