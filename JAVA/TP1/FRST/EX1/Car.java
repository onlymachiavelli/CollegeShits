package JAVA.TP1.FRST.EX1;

public class Car {
    public String brand; 
    public double price; 
    Car() {
        this.brand = "default";
        this.price = 0.0;
    }
    //getters and setters 
   public String getBrand() {
    return this.brand;
   }
   public double getPrice (){
    return this.price; 
   }


   public void setPrice (double price) {
    this.price = price; 

   }

   public void setBrand(String brand)  {
    this.brand = brand ; 
   }

   public void Show() {
    System.out.println("Brand: " + this.brand + " Price: " + this.price);
   }

}
