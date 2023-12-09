 abstract class  Forme {
    public String couleur ; 
    Forme(String color ) {
        this.couleur = color;
    }
    abstract public  double  calculerSurface() ;
    abstract public double calculerPerim();
    void afficherDetail (){
        System.out.println("The Perm is : " + this.calculerPerim() + " And the surface is : "+ this.calculerSurface() ) ;
    }
}