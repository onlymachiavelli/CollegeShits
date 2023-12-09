public class Rectangle extends Forme {

    double length, height  ; 

    Rectangle(double length, double height, String color) {
        super(color);
        this.length = length;
        this.height = height; 

    }

    public double calculerPerim () {
        return (this.length + this.height) / 2 ; 
    }


    public double calculerSurface () {
        return this.length * this.height; 
    }
}
