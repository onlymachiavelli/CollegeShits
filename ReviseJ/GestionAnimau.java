class GestionAnimau {
    public Animal[] a;
    public int index;

    GestionAnimau() {
        this.a = new Animal[100];
        this.index = 0;
    }

    public void addAnimal(Animal target) {
        a[this.index] = target;
        ++this.index;
    }

    //show all 
    public void showAll() {
        for (int i = 0; i < this.index; ++i) {
            a[i].faireBruit();
            a[i].marcher();
            a[i].manager();
        }
    }
}
