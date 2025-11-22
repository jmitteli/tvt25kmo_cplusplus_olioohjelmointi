# tvt25kmo_cplusplus_olioohjelmointi

Olio-ohjelmoinnin kurssin C++-tehtävät ja harjoitukset.

Sisältö:
- H1 – Perusfunktiot ja poikkeus
- Harjoitus 2a – Luokat ja oliot (`Car`, `Rectangle`, `Student`)
- Harjoitus 2b – Oliolista (`Car` + `std::vector`)

---

## H1 – Laskenta funktioilla

Luo C++-projekti nimeltä **h1**.

### Tehtävän kuvaus

Muokkaa `main`-funktiota seuraavasti:

1. **Kysy käyttäjältä kaksi kokonaislukua** ja tallenna ne muuttujiin `a` ja `b`.
   - Käytä syötteissä ja tulosteissa `cin` ja `cout` -olioita.

2. **Lisää ohjelmaan funktiot summan ja osamäärän laskemiseen ja tulostamiseen:**

   - `calcSum(int, int)`  
     - ottaa vastaan kaksi kokonaislukua  
     - laskee ja **tulostaa** niiden summan  
     - **ei palauta** mitään

   - `calcDiv(int, int)`  
     - ottaa vastaan kaksi kokonaislukua  
     - laskee ja **tulostaa** niiden osamäärän  
     - **ei palauta** mitään  
     - jos jakaja on nolla, **tulostaa virheilmoituksen** (ei kaadu)

   → Kutsu näitä funktioita `main`-funktiosta antaen argumenteiksi muuttujat `a` ja `b`.

3. **Lisää toiset funktiot, jotka palauttavat arvot mutta eivät tulosta:**

   - `retSum(int, int)`  
     - ottaa vastaan kaksi kokonaislukua  
     - **palauttaa summan**  
     - ei tulosta mitään

   - `retDiv(int, int)`  
     - ottaa vastaan kaksi kokonaislukua  
     - **palauttaa osamäärän** (`float`)  
     - ei tulosta mitään  
     - jos jakaja on nolla, funktiossa aiheutetaan runtime error:
       ```cpp
       throw std::runtime_error("jakaja ei saa olla nolla!");
       ```

   → Kutsu näitä funktioita `main`-funktiosta, tallenna palautetut arvot ja tulosta ne `cout`-komennolla.

---

## Harjoitus 2a – Luokka, olio

Luo C++-projekti nimeltä **h2a**.

Tee jokaiselle luokalle oma `.h`- ja `.cpp`-tiedosto. Noudata periaatetta:

- jäsenmuuttujat ovat **private**
- metodit ovat **public**

### 1. Car-luokka

Luo luokka `Car`, jolla on seuraavat jäsenet.

**Jäsenmuuttujat:**

- `brand` – `std::string`, auton merkki
- `model` – `std::string`, auton malli
- `yearModel` – `int`, auton valmistusvuosi

**Metodit:**

- `void printData();`  
  - tulostaa auton merkin, mallin ja valmistusvuoden

- `void setBrand(std::string);`  
  - asettaa auton merkin

- `void setModel(std::string);`  
  - asettaa auton mallin

- `void setYearModel(int);`  
  - asettaa auton valmistusvuoden

**Pääohjelmassa (`main`):**

- Luo `Car`-olio **pinomuistiin** (esim. `Car car;`)
- Aseta merkki, malli ja vuosimalli sette­rimetodeilla
- Tulosta auton tiedot `printData()`-metodilla

---

### 2. Rectangle-luokka

Luo luokka `Rectangle`, jolla on seuraavat jäsenet.

**Jäsenmuuttujat:**

- `width` – `double`, suorakulmion leveys  
- `height` – `double`, suorakulmion korkeus  

**Metodit:**

- `double getArea();`  
  - palauttaa pinta-alan kaavalla  
    `width * height`

- `double getCircum();`  
  - palauttaa ympärysmitan kaavalla  
    `2 * (width + height)`

- `void setWidth(double);`  
  - asettaa suorakulmion leveyden

- `void setHeight(double);`  
  - asettaa suorakulmion korkeuden

**Pääohjelmassa (`main`):**

- Luo `Rectangle`-olio **kekomuistiin** (esim. `Rectangle* rect = new Rectangle();`)
- Aseta leveys ja korkeus setterimetodeilla
- Tulosta pinta-ala (`getArea()`) ja ympärysmitta (`getCircum()`)
- Tuhoa olio lopuksi `delete`-komennolla

---

### 3. Student-luokka

Luo luokka `Student`. Käytä Qt Creatorin **Refactor → Add Getter and Setter** -toimintoa, kun olet luonut jäsenmuuttujat.

**Jäsenmuuttujat:**

- `name` – `std::string`, opiskelijan nimi
- `studentNumber` – `int`, opiskelijanumero
- `average` – `double`, opiskelijan keskiarvo

**Setterit:**

- `void setName(std::string);`
- `void setStudentNumber(int);`
- `void setAverage(double);`

**Getterit:**

- `std::string getName();`
- `int getStudentNumber();`
- `double getAverage();`

**Pääohjelmassa (`main`):**

- Luo `Student`-olio **älykkäällä osoittimella**, esim.:
  ```cpp
  std::unique_ptr<Student> student = std::make_unique<Student>();
  

## Harjoitus 3a – Luokka, perintä

## Tehtävänanto

Toteuta C++:lla Qt Creator -ympäristössä konsolisovellus, jossa on kaksi luokkaa:

- `Chef`
- `ItalianChef`, joka perii luokan `Chef`

Luokat jaetaan omiin tiedostoihinsa (`.h` ja `.cpp`).

### Chef

Toteuta luokka `Chef` siten, että:

- Konstruktorissa annetaan kokin nimi ja tulostetaan tieto konstruktorin kutsumisesta.
- Destruktorissa tulostetaan tieto destruktorin kutsumisesta.
- `makeSalad()` tulostaa, että kokki tekee salaattia.
- `makeSoup()` tulostaa, että kokki tekee keittoa.
- `name`-jäsen on `protected`, jotta aliluokka pääsee siihen käsiksi.

### ItalianChef


Toteuta luokka `ItalianChef` siten, että:

- Se perii julkisesti luokan `Chef`: `class ItalianChef : public Chef`.
- Konstruktorissa välitetään nimi kantaluokan konstruktorille ja tulostetaan tieto konstruktorin kutsumisesta.
- Destruktorissa tulostetaan tieto destruktorin kutsumisesta.
- `getName()` palauttaa kokin nimen.
- `makePasta()` tulostaa, että kokki tekee pastaa.

### Pääohjelma

Pääohjelmassa:

1. Luodaan lohkossa (`{ ... }`) `Chef`-olio (esim. `"Gordon Ramsay"`), kutsutaan `makeSalad()` ja `makeSoup()`, ja annetaan olion tuhoutua lohkon lopussa.
2. Luodaan erillisessä lohkossa `ItalianChef`-olio (esim. `"Anthony Bourdain"`), kutsutaan `makeSalad()`, `makeSoup()` ja `makePasta()`, sekä tulostetaan `getName()`-metodin palauttama nimi.

Tulosteesta tulee ilmetä konstruktoreiden ja destruktoreiden kutsumisjärjestys sekä metodikutsut.




