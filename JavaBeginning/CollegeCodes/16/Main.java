import java.util.Scanner;

class InvalidNameException extends Exception {

    public InvalidNameException (String message){
        super (message);
    }
}

class InvalidEmployeeIdException extends Exception {
    public  InvalidEmployeeIdException (String message){
        super (message);
    }
}

class InvalidDepartmentIdException extends Exception {
    public  InvalidDepartmentIdException (String message){
        super (message);
    }
}


class Employee {

    private int employeeId;
    private  String employeeName;
    private int depId;

    public Employee (int employeeId, String employeeName,int depId) throws InvalidNameException ,  InvalidEmployeeIdException , InvalidDepartmentIdException {

        if (employeeName== null || employeeName.isEmpty()  || !Character.isUpperCase(employeeName.charAt(0)))
            throw new  InvalidNameException ("First letter shoulde be capital");

        if (employeeId <2001 && employeeId > 5001)
            throw new InvalidEmployeeIdException ("Id should be in range of 2001 and 5001");
        
        if (depId < 1 && depId >5)
            throw new InvalidDepartmentIdException ("DepId must be between 1 and 5");
        
        this.employeeId = employeeId;
        this.employeeName = employeeName;
        this.depId = depId;
    }

 public void displayDetails() {
        System.out.println("Employee Details:");
        System.out.println("Employee ID: " + employeeId);
        System.out.println("Name: " + employeeName);
        System.out.println("Department ID: " + depId);
    }
}


public class Main {
    public static void main (String []args){

        Scanner in = new Scanner (System.in);

       try {
            // Input employee details
            System.out.println("Enter Employee ID (2001-5001):");
            int empId = in.nextInt();
            in.nextLine();
            System.out.println("Enter Employee Name (First letter capital):");
            String name = in.nextLine();
            
            System.out.println("Enter Department ID (1-5):");
            int deptId = in.nextInt();
            
            // Create employee object with validated inputs
             Employee employee = new Employee(empId, name, deptId);
            
  
            // Display employee details
            employee.displayDetails();
            
        } 

         catch (NumberFormatException e) {
            System.out.println("Error: Please enter valid numeric values for Employee ID and Department ID");
        } catch (InvalidEmployeeIdException e) {
            System.out.println("Error: " + e.getMessage());
        } catch (InvalidNameException e) {
            System.out.println("Error: " + e.getMessage());
        } catch (InvalidDepartmentIdException e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            in.close();
        }
    }
}


