// Abstract class Shape
abstract class Shape {
    abstract void rectangleArea(double length, double breadth);
    abstract void squareArea(double side);
    abstract void circleArea(double radius);
}

// Area class implementing Shape
class Area extends Shape {
    // Overriding rectangleArea method
    @Override
    void rectangleArea(double length, double breadth) {
        double area = length * breadth;
        System.out.println("Area of Rectangle: " + area);
    }

    // Overriding squareArea method
    @Override
    void squareArea(double side) {
        double area = side * side;
        System.out.println("Area of Square: " + area);
    }

    // Overriding circleArea method
    @Override
    void circleArea(double radius) {
        double area = Math.PI * radius * radius;
        System.out.println("Area of Circle: " + area);
    }
}

// Main class to demonstrate Runtime Polymorphism
public class Main {
    public static void main(String[] args) {
        // Reference of Shape class pointing to object of Area class
        Shape shape = new Area();

        // Runtime polymorphism in action
        shape.rectangleArea(5.0, 3.0);
        shape.squareArea(4.0);
        shape.circleArea(2.5);
    }
}
