
class Person : 
    def __init__(self, fname : str, lname:str, phone:str , email:str) :
        self.fname = fname
        self.lname = lname
        self.phone = phone
        self.email = email


class Travaileur (Person) :
    def __init__(self, id:str) :
        self.id = id
    def __str__(self) -> str:
        return f"Full name : {self.fname} {self.lname} Phone is :  {self.phone} with email : {self.email} width ID {self.id}" 
   
# // Alaa barka 



Alaa = Travaileur("1234567890")
Alaa.email = "mralaabarka@gmail.com"
Alaa.fname = "Alaa"
Alaa.lname = "Barka"
Alaa.phone = "0634567890"

print(Alaa)