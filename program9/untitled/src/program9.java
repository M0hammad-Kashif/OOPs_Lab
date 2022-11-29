
abstract class Shape {
    int param1;
    int param2;

    abstract void printArea();
}

class Triangle extends Shape {
    Triangle(int _height, int _base) {
        param1 = _height;
        param2 = _base;
    }

    void printArea() {
        System.out.println("Area of Triangle is: " + (0.5 * param1 * param2));
    }
}

class Rectangle extends Shape {
    Rectangle(int _length, int _breadth) {
        param1 = _length;
        param2 = _breadth;
    }

    void printArea() {
        System.out.println("Area of Rectangle is: " + (param1 * param2));
    }
}

class Circle extends Shape {
    Circle(int _radius) {
        param1 = _radius;
    }

    void printArea() {
        System.out.println("Area of Circle is: " + (3.14 * param1 * param1));
    }
}

public class program9 {

    public static void main(String[] args) {
        System.out.println("Program 9");
        Triangle t = new Triangle(10, 20);
        Rectangle r = new Rectangle(10, 20);
        Circle c = new Circle(10);
        t.printArea();
        r.printArea();
        c.printArea();
    }
}