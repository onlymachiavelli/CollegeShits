public class GestionForme {
    public Forme[] t;
    public int index ; 

    GestionForme() {
        index = 0 ; 
        this.t = new Forme[100] ;

    } 
    public void addForm (Forme help) {
        t[index] = help ; 
        ++index; 
    }
    public void Expose() {
        for (int i =0 ; i < index ; i++) {
            System.out.println("Ahlili yamma \n the Surface and edge of  of current " + i + " element is : " + this.t[i].calculerPerim() + " , " + this.t[i].calculerSurface() + " and the color is : " +this.t[i].couleur) ; 
            
        } 
    }
    public void SumSurf () {
        double sum = 0 ; 
        for (int i = 0 ; i< index; i++) {
            sum += this.t[i].calculerSurface();
        }
        System.out.println("Sum of surfaces of all shapes is : " + sum);
    }

    public void SumPer () {
        double sum = 0 ; 
        for (int i = 0 ; i< index; i++) {
            sum += this.t[i].calculerPerim();
        }
        System.out.println("Sum of Edges of all shapes is : " + sum);
    }
}
