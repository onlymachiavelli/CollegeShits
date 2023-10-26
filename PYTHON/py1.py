class Animal :
    def __init__ (self, name) :
        self.name = name 
        
    def speak (self) :
        print(f"Can speak")


class CanFly :

    def fly(self) : 
        print("The animal is flying ")


class CanSwim : 
    def swim (self) :
        print("The animal is Swimming")



class Dog(Animal) :

    def speak(self) :
        print("Bark")

class Duck(Animal, CanFly, CanSwim):
    
        def speak(self) :
            print("Quack")


class Fish(Animal, CanSwim) :
    
        def speak(self) :
            print("Blub")


class Bird(Animal, CanFly) :
     def speak(self):
          
          print("This is a bird")
#dog, duck
dog = Dog("Dog")
duck = Duck("Duck")
fish = Fish("Fish")
bird = Bird("Bird")
print("\n\nTesting the classes: \n")
bird.speak()
bird.fly()
fish.speak()
fish.swim()

dog.speak()
duck.speak()
duck.fly()
duck.swim()