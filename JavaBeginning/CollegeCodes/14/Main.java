import java.util.Scanner;

// Interface with abstract method
interface VolumeDisplayer {
    void displayVolume();
}

// Cone class implementing the interface
class Cone implements VolumeDisplayer {
    private double radius;
    private double height;

    public Cone(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }

    @Override
    public void displayVolume() {
        double volume = (1.0 / 3) * Math.PI * radius * radius * height;
        System.out.printf("Volume of Cone: %.2f cubic units%n", volume);
    }
}

// Hemisphere class implementing the interface
class Hemisphere implements VolumeDisplayer {
    private double radius;

    public Hemisphere(double radius) {
        this.radius = radius;
    }

    @Override
    public void displayVolume() {
        double volume = (2.0 / 3) * Math.PI * radius * radius * radius;
        System.out.printf("Volume of Hemisphere: %.2f cubic units%n", volume);
    }
}

// Cylinder class implementing the interface
class Cylinder implements VolumeDisplayer {
    private double radius;
    private double height;

    public Cylinder(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }

    @Override
    public void displayVolume() {
        double volume = Math.PI * radius * radius * height;
        System.out.printf("Volume of Cylinder: %.2f cubic units%n", volume);
    }
}

// Main class to demonstrate runtime polymorphism
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Create an array of VolumeDisplayer to store different shapes
        VolumeDisplayer shapes;

        // Input for Cone
        System.out.println("Enter radius and height for Cone:");
        double coneRadius = scanner.nextDouble();
        double coneHeight = scanner.nextDouble();
        shapes = new Cone(coneRadius, coneHeight);
        shapes.displayVolume();
        // Input for Cylinder
        System.out.println("Enter radius and height for Cylinder:");
        double cylRadius = scanner.nextDouble();
        double cylHeight = scanner.nextDouble();
        shapes = new Cylinder(cylRadius, cylHeight);
        shapes.displayVolume();
        // Input for Hemisphere
        System.out.println("Enter radius for Hemisphere:");
        double hemiRadius = scanner.nextDouble();
        shapes= new Hemisphere(hemiRadius);
        shapes.displayVolume();

        scanner.close();
    }
}