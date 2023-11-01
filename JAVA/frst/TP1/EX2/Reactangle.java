package TP1.EX2;

public class Reactangle {
    public float length ; 
    public float height ; 
    void Rectangle(float length, float height) {
        this.height = height ; 
        this.length = length ;
    }

    double surface () {
        return this.length * this.height ; 
    }

    double perimeter () {
        return 2 * (this.length + this.height) ; 
    }

    void show () {
        System.out.println("Length: " + this.length + " Height: " + this.height + " Surface: " + this.surface() + " Perimeter: " + this.perimeter());
    }
}
