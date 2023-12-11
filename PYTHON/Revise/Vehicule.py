from abc import ABC, abstractmethod


class Vehicule (ABC):
    def __init__(self , mat, annee, modele, prix) :
        self.mat = mat
        self.annee = annee
        self.modele = modele
        self.prix = prix
    @abstractmethod
    def demarrer() :
        pass


    @abstractmethod
    def accelerer() : 
        pass 


    def __str__(self) :
        #return every value 
        return f"matricule : {self.mat} \n annee : {self.annee} \n modele : {self.modele} \n prix : {self.prix}"
        
#class voiture 
class Voiture(Vehicule) :
    #init using super 
    def __init__(self, mat, annee, modele, prix) :
        super().__init__(mat, annee, modele, prix)


    def demarrer(self) :
        print("la voiture demarre")
    def accelerer(self) :
        print("la voiture accelere")
    
#class camion 
class Camion(Vehicule) :
    #init using super 
    def __init__(self, mat, annee, modele, prix) :
        super().__init__(mat, annee, modele, prix)
    def demarrer(self) :
        print("le camion demarre")
    def accelerer(self) :
        print("le camion accelere")



#main program 
#creating objects
voiture = Voiture("1234", "2019", "BMW", "100000")
camion = Camion("5678", "2018", "Mercedes", "200000")

#calling methods
voiture.demarrer()
voiture.accelerer()
print(voiture)
print("***********************")
camion.demarrer()
camion.accelerer()
print(camion)



from abc import ABC, abstractmethod



class Employe(ABC):
    def __init__(self, mat, nom, prenom, date):
        self.mat = mat
        self.nom = nom
        self.prenom = prenom
        self.date = date

    def __str__(self):
        return f"matricule : {self.mat} \n nom : {self.nom} \n prenom : {self.prenom} \n date : {self.date}"

    @abstractmethod
    def getSalary(self):
        pass

class Ouvrier(Employe):
    def __init__(self, ans, mat, nom, prenom, date):
        super().__init__(mat, nom, prenom, date)
        self.ans = ans
        self.smig = 500

    def getSalary(self):
        salary = self.ans * 100 + self.smig
        if salary <= self.smig * 2:
            return salary
        return self.smig * 2

class Cadre(Employe):
    def __init__(self, mat, nom, prenom, date, index):
        super().__init__(mat, nom, prenom, date)
        # index should be 1 to 4
        self.index = index

    def getSalary(self):
        salary = self.index * 5000
        if salary <= 8000:
            return salary
        return 5000

    def __str__(self):
        return f"{super().__str__()} \n index : {self.index}"

class Patron(Employe):
    def __init__(self, mat, nom, prenom, date, ca, percent):
        super().__init__(mat, nom, prenom, date)
        self.ca = ca
        self.percent = percent

    def __str__(self):
        return f"{super().__str__()} \n chiffre d'affaire : {self.ca}"

    def getSalary(self):
        return self.ca * self.percent / 100

# main program
# creating objects
ouvrier = Ouvrier(2, "1234", "Jack", "Doe", "12-12-2023")

# calling methods
print(ouvrier)
print(ouvrier.getSalary())

# creating objects
cadre = Cadre("1234", "Jack", "Doe", "12-12-2023", 2)
# calling methods
print(cadre)
print(cadre.getSalary())

# creating objects
patron = Patron("1234", "Jack", "Doe", "12-12-2023", 12000, 20)
# calling methods
print(patron)
print(patron.getSalary())

