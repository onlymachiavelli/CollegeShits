public class Chat  implements Animal {
    public String race  ;

    @Override
    public void faireBruit() {
        System.out.println("Le chat miaule") ;
    }

    @Override
    public void marcher() {
        System.out.println("Le chat se deplace avec agilitee") ;
    }

    @Override
    public void manager() {
        System.out.println("Le chat mange sa nourriture") ;


    }
     
}
