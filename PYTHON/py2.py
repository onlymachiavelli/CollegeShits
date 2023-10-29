
class Person : 
    def __init__(self, fname : str, lname:str, phone:str , email:str) :
        self.fname = fname
        self.lname = lname
        self.phone = phone
        self.email = email

    def __str__(self) -> str:
        return f"Full name : {self.fname} {self.lname} Phone is :  {self.phone} with email : {self.email}"


class Travaileur (Person) :
    def __init__(self, id:str) :
        self.id = id
    def __str__(self) -> str:
        return f"Full name : {self.fname} {self.lname} Phone is :  {self.phone} with email : {self.email} width ID {self.id}" 


class Scientific ( Travaileur) :
    def __init__(self, speciality:str) :
        self.speciality = speciality
    def __str__(self) -> str:
        return f"Full name : {self.fname} {self.lname} Phone is :  {self.phone} with email : {self.email} width ID {self.id} and speciality {self.speciality}"


Alaa = Scientific("Computer Science")
Alaa.email = "mralaabarka@gmail.com"
Alaa.fname = "Alaa"
Alaa.lname = "Barka"
Alaa.phone = "0634567890"
Alaa.id = "123456789"


Elyes = Person (
    fname = "Elyes",
    lname = "Sayeh",
    phone = "0634567890",
    email = "layes@gmail.com"
)


Monji = Travaileur("1236"
)
Monji.fname = "Monji"
Monji.lname = "Sayeh"
Monji.email = "monji@gmail.com"
Monji.phone = "0634567890"
#make a car class


print("Person : ", Elyes)
print("Scientist : ", Alaa)
print("Regular Person : ",Monji)

