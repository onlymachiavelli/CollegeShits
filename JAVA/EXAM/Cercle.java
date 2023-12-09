public class Cercle extends Forme {
    double rayon ; 


    Cercle(double r, String color) {
        super(color);
        this.rayon = r ;


    }


    public double calculerPerim() {
        

        return this.rayon*this.rayon *3.15;
    }

    public double calculerSurface() {


        return 2*this.rayon *3.15;
    }   

    
}
