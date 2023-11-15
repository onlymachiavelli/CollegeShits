import math
class Cercle:
    def __init__(self , r:float ):
        self.r = r
    def perim (self):
        return(math.pi *2*self.r)
    
    def surf(self):
        return(math.pi *self.r**2)
class Cylindre(Cercle):
    def __init__(self ,r, h):
        super().__init__(r)
        self.h=h
    def Volume(self):
        return(super().surf()* self.h)
    def surff(self):
        return(super().surf()*2)
    
c = Cercle(3)
c2= Cylindre(7,8)
print(c.perim())
print(c.surf())
print(c2.Volume())
print(c2.surff())