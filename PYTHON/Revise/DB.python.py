import sqlite3



con = sqlite3.connect("data.db")


requests = [
        "create table vols(id_vol varchar(20) , depart varchar (20) , arrivee varchar(20) , jour date, heure time, niveau int(3));" ,
        "create table aeroport(id_aero varchar(20) , ville varchar(20) , pays varchar(20));",
        "insert into vols values ('AF1204' , 'CDG', 'FCO' , '2016-058-02' , '07:35:00', 300) ;",
        "insert into vols values ('AF1205' , 'FCO', 'CDG' , '2016-058-02' , '10:25:00', 300) ;",
        "insert into vols values ('AF1204' , 'CDG', 'FCO' , '2016-058-02' , '10:05:00', 310) ;",
        "insert into vols values ('AF1505' , 'FCO', 'CDG' , '2016-058-02' , '13:00:00', 310) ;",

        "insert into aeroport values ('CDG' , 'Paris' , 'France') ;",
        "insert into aeroport values ('ORY' , 'Paris' , 'France') ;",
        "insert into aeroport values ('MRS' , 'Marseille' , 'France') ;",
        "insert into aeroport values ('FCO' , 'Rome' , 'Italie') ;"
]


cur = con.cursor()
for request in requests:
    cur.execute(request)


    cur.execute("select * from vols;")
    print(cur.fetchall())

#EX 2 : 


import sqlite3

con = sqlite3.connect("Epidemie.db")
cur = con.cursor()



requests = [
    "CREATE TABLE palu (iso TEXT PRIMARY KEY, annee INTEGER, nouveaux_cas INTEGER, deces INTEGER);",
    "CREATE TABLE demographie (pays TEXT PRIMARY KEY, annee INTEGER, population INTEGER);",
    "INSERT OR IGNORE INTO palu (iso, annee, nouveaux_cas, deces) VALUES ('BR', 2009, 309, 316);",
    "INSERT OR IGNORE INTO palu (iso, annee, nouveaux_cas, deces) VALUES ('BR', 2010, 334667, 76);",
    "INSERT OR IGNORE INTO palu (iso, annee, nouveaux_cas, deces) VALUES ('KE', 2010, 898531, 26017);",
    "INSERT OR IGNORE INTO palu (iso, annee, nouveaux_cas, deces) VALUES ('ML', 2011, 307035, 2128);",
    "INSERT OR IGNORE INTO palu (iso, annee, nouveaux_cas, deces) VALUES ('UG', 2010, 1581160, 8431);",
    "INSERT OR IGNORE INTO demographie (pays, annee, population) VALUES ('BR', 2009, 193720000);",
    "INSERT OR IGNORE INTO demographie (pays, annee, population) VALUES ('BR', 2010, 194946000);"
]

for request in requests:
    cur.execute(request)

print("Contenu de la table palu:")
cur.execute("SELECT * FROM palu")
for row in cur.fetchall():
    print(row)

print("Contenu de la table demographie:")
cur.execute("SELECT * FROM demographie")
for row in cur.fetchall():
    print(row)

con.close()
