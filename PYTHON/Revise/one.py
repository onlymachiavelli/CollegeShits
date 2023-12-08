from abc import ABC, abstractmethod  

class Animal :
    def __init__(self, name, color) :
        self.name = name
        self.color = color
    def speak(self) :
        print(f"the animal {self.name} is Speaking")
class Swimmer :
    def __init__(self, size) :
        self.size = size
    def swim(self) :
        print(f"the animal {self.name} is Swimming")

class Fish(Animal, Swimmer) : 
    def __init__(self, name, color, size) :
        Animal.__init__(self, name, color)
        Swimmer.__init__(self, size)
        self.name = name 
        self.color = color 
        self.size = size 




Houta = Fish("Peter" , "blue", "big")
Houta.swim()