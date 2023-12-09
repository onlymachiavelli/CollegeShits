public class Triangle extends Forme {
    double side1, side2, side3;
    Triangle (String color, double a, double b, double c ) {
        super(color);
        this.side1 = a; 
        this.side2 = b ; 
        this.side3 = c; 
    }



    public double getHeight () {
        return (this.side1 + this.side2 + this.side3) / 3 ; 
    }
    public double getBase () {
        return (this.side1 + this.side2 + this.side3) / 4 ;  
    }
    public double calculerPerim() {
        return (this.side1 + this.side2 + this.side3) ;  
    }
    public double calculerSurface() {
         return (this.getHeight() * this.getBase()) / 2 ; 
    }
}

