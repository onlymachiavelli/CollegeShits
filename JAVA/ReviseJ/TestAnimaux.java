class TextAnimaux {
    //create dog 
   
    public static void main(String[] args) {
        Chien dog = new Chien();
        Chat chat = new Chat();
        Oiaseau o = new Oiaseau(); 
        GestionAnimau g = new GestionAnimau();
        g.addAnimal(dog); 
        g.addAnimal(chat);
        g.addAnimal(o);
        g.showAll();
    }
    
    
}