

# Abstract class
from abc import ABC, abstractmethod

class Animal (ABC) : 
    def __init__(self, name) :
        self.name = name
    @abstractmethod
    def Speak(self) :
        pass


class Dog(Animal) : 
    def __init__(self, name, color) : 
        super().__init__(name) 
        self.color = color
    def Speak(self):
        print(f"What the dog doing {self.name}")
class Cat(Animal) :  
    def __init__(self, name, color)  :
        super().__init__(name) 
        self.color = color

    def Speak(self):
        print(f"What the cat doing {self.name}")

#define dog 
dog = Dog("Koredge", "black")

# define cat
cat = Cat("Besbes", "white")

# call speak method
dog.Speak()

# call speak method
cat.Speak()

