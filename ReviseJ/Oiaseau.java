public class Oiaseau  implements Animal {
    public String race  ;

    @Override
    public void faireBruit() {
        System.out.println("Le oiaseau chente") ;
    }

    @Override
    public void marcher() {
        System.out.println("Le oiaseau se deplace en sautilliant") ;

    }

    @Override
    public void manager() {

        System.out.println("Le oiaseau picore des gains") ;

    }
     
}
