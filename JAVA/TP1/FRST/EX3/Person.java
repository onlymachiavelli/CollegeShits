package JAVA.TP1.FRST.EX3;

public class Person {
    public String name ; 
    public String surname ;
    public String sex;
    public int year; 
    public String status ; 
    //married or not bool 
    public boolean married ;

    //constructor 
    public Person(String n, String s ,String x ,int y ,boolean m){
        this.name = n ;
        this.surname = s ;
        this.sex=x ;
        this.year = y ;
        this.married = m ;
        if (this.married == true) {
            this.status = "married" ;
        }else{
            this.status = "not married" ;
        }
    }

    public void Information () {
        String[] pronounce = this.sex.equals("m") ? new String[]{"he", "mr"} : new String[]{"she", "miss"};
        System.out.println("This person is " + this.name + " " + this.surname + " " + pronounce[0] + " is " + this.status + " and " + pronounce[0] + " was born in " + this.year );  
    }

    public int age () {
        return 2023 - this.year; 
    }

    public void Marry (Person p) {
        if (this.sex == p.sex) {
            System.out.println ("You can't marry your own gender, This is Gay");
        }

        if (this.married || p.married) {
            System.out.println ("One of you are already married");
        }
        if (this.sex =="m") {
            //update the last name 
            p.name += " " + this.name;
            this.married = true; 
            p.married = true;
        }else {
            this.name += " " + p.name;
            p.married = true;
            this.married = true; 
        }
    }
}
