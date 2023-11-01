package JAVA.TP1.FRST.EX3;

public class Main {
    
    public static void main(String args[]) {
        Person Alaa = new Person("Barka", "Alaa", "m", 2002, false);
        Person Mia = new Person("Khalifa", "Mia" , "f" , 1990, false) ; 
        Alaa.Information();
        Mia.Information();
        Alaa.Marry(Mia);
        Alaa.Information();
        Mia.Information();
        
        
    }
}
