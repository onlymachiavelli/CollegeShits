public class Chien  implements Animal {
    public String race  ;

    @Override
    public void faireBruit() {
        System.out.println("Le chien aboie") ;
    }

    @Override
    public void marcher() {
        System.out.println("Le chien marche") ;

    }

    @Override
    public void manager() {
        System.out.println("Le chien mange sa nourriture") ;


    }
     
}
