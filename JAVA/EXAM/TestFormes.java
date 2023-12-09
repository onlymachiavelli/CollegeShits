public class TestFormes {
    public static void main (String[] args) {
        Cercle c = new Cercle(15, "Red") ; 

        Rectangle r = new Rectangle(10, 20, "Blue") ; 
        
        Triangle t = new Triangle("Green", 12, 6.9, 9.11) ; 

        GestionForme manager = new GestionForme(); 

        manager.addForm(t);
        manager.addForm(r);
        manager.addForm(c);
        manager.Expose();
        manager.SumPer();
        manager.SumSurf();



    }   
}
