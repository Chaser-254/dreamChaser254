import sqlite3
from sqlite3.dbapi2 import Cursor

db = sqlite3.connect("PhoneBook.db") 
Cur = db.cursor()

    Cur.execute("""CREATE TABLE IF NOT EXISTS Names(id integer PRIMARY KEY,
    firstname text, surname text, phonenumber text);""")

    Cur.execute(""" INSERT OR IGNORE INTO Names(id,firstname,surname,phonenumber)
    VALUES(1,"Emmanuel","Erogo","0111363870")""")
    db.commit()

    Cur.execute(""" INSERT  OR IGNORE INTO Names(id,firstname,surname,phonenumber')
    VALUES(2,"Moses","Kimani","0786543234")""")
    db.commit()

    Cur.execute(""" INSERT  OR IGNORE INTO Names(id,firstname,surname,phonenumber)
    VALUES(3,"Sarah","Akiru","0786574550")""")
    db.commit()

    Cur.execute(""" INSERT  OR IGNORE INTO Names(id,firstname,surname,phonenumber)
    VALUES(4,"Gerald","Kebaso","0786553422")""")
    db.commit()

    Cur.execute(""" INSERT OR IGNORE INTO Names(id,firstname,'surname,phonenumber)
    VALUES(5,"Kevin","Kimutai","0786432075")""")
    db.commit()

    Cur.execute(""" INSERT OR IGNORE INTO Names(id,firstname,surname,phonenumber)
    VALUES(6,"Bennah","Wachira","0765987567")""")
    db.commit()

    db.close()  