package course;
public class Course {

    private  int courseId;
    private  String courseName;
    private int credits;

    public Course (int courseId , String courseName, int credits ){
        this.courseId = courseId;
        this.courseName = courseName;
        this.credits = credits;
    }

    public Course (){
        this (0,"",0);
    }

    public String getCourseInfo (){

        return "CourseId : " + this.courseId + "   CourseName : " + this.courseName + "  Credits :" + this.credits;
    }

}