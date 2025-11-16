# tvt25kmo_cplusplus_olioohjelmointi
Olio-ohjelmointi kurssin tehtävät ja harjoitukset

H1:

Luo C++-projekti nimeltään h1

Muokkaa main-funktiota seuraavasti:
Kysy luvut ja tallenna ne muuttujiin a ja b
käytä cin ja cout olioita
Lisää sovellukseen summan ja osamäärän laskemiseen ja tulostamiseen käytettävät funktiot:
funktio calcSum ottaa vastaan kaksi kokonaislukua ja tulostaa niiden summan, mutta ei palauta mitään.
funktio calcDiv ottaa vastaan kaksi kokonaislukua ja tulostaa niiden osamäärän, mutta ei palauta mitään.
jos jakaja on nolla calcDiv tulostaa virheilmoituksen.
kutsu em. funktioita mainissa antamalla niille argumenttina muuttujat a ja b.
Lisää sovellukseen toiset summan ja osamäärän laskemiseen ja tulostamiseen käytettävät funktiot:
funktio retSum ottaa vastaan kaksi kokonaislukua ja palauttaa niiden summan, mutta ei tulosta mitään
funktio retDiv ottaa vastaan kaksi kokonaisluka ja palauttaa niiden osamäärän (float), mutta ei tulosta mitään
jos jakaja on nolla retDiv funktiossa "aiheutuu runtime error" eli voit käyttää seuraavaa lausetta
    throw std::runtime_error("jakaja ei saa olla nolla!");   

**************************************************************************************************

Harjoitus2a (luokka, olio)
Tee jokaiselle luokalle oma .h- ja .cpp-tiedosto. Noudata kussakin luokassa periaatetta

jäsenmuuttujat ovat privaatteja
metodit ovat publikkeja
Luo C++-projekti nimeltään h2a

Car-luokka
Lisää projektiin luokka nimeltä Car. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

Jäsenmuuttujat:
brand: merkkijono, joka sisältää auton merkin.
model: merkkijono, joka sisältää auton mallin.
yearModel: kokonaisluku, joka sisältää auton valmistusvuoden.
Metodit:
printData(): tulostaa auton merkin, mallin ja valmistusvuoden.
setBrand(string): asettaa auton merkin.
setModel(string): asettaa auton mallin.
setYearModel(int): asettaa auton valmistusvuoden.
Pääohjelmassa:

Luo Car-olio pinomuistiin ja aseta sille merkki, malli ja vuosi.
Tulosta auton tiedot käyttämällä printData()-metodia.
Rectangle-luokka
Lisää projektiin luokka nimeltä nimeltä Rectangle. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

Jäsenmuuttujat:
width: reaaliluku(double), joka määrittää suorakulmion leveyden.
height: reaaliluku(double), joka määrittää suorakulmion korkeuden.
Metodit:
getArea(): laskee ja palauttaa suorakulmion pinta-alan kaavalla width * height.
getCircum(): laskee ja palauttaa suorakulmion ympärysmitan kaavalla 2 * (width + height).
setWidth(double): asettaa suorakulmion leveyden.
setHeight(double): asettaa suorakulmion korkeuden.
Pääohjelmassa:

Luo Rectangle-olio kekomuistiin ja aseta sen leveys ja korkeus.
Tulosta suorakulmion pinta-ala ja ympärysmitta.
Tuhoa olio.
Student-luokka
Lisää projektiin luokka nimeltä Student. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

Käytä tässä harjoituksessa hyväksesi Qt-Creatorin Refactor toimintoa. Kun olet luonut jäsen muuttujat, klikkaa hiiren oikealla ja valitse "Add Getter and Setter ...".

Jäsenmuuttujat:
name: merkkijono, joka sisältää opiskelijan nimen.
studentNumber: kokonaisluku, joka sisältää opiskelijanumeron.
average: reaaliluku, joka sisältää opiskelijan keskiarvon.
Metodit:
Setterit:
setName(string): asettaa opiskelijan nimen.
setStudentNumber(int): asettaa opiskelijanumeron.
setAverage(double): asettaa opiskelijan keskiarvon.
Getterit:
string getName(): palauttaa opiskelijan nimen.
int getStudentNumber(): palauttaa opiskelijanumeron(merkkimuotoinen tunniste).
double getAverage(): palauttaa opiskelijan keskiarvon.
Pääohjelmassa:

Luo Student-olio smart pointerilla ja aseta sille nimi, opiskelijanumero ja keskiarvo.
Tulosta opiskelijan tiedot käyttämällä get-metodeja.   

****************************************************************************************************
Harjoitus2b (oliolista)
Luo C++-projekti nimeltään h2b

Lisää projektiin luokka nimeltä Car. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

Jäsenmuuttujat:
brand: merkkijono, joka sisältää auton merkin.
model: merkkijono, joka sisältää auton mallin.
yearModel: kokonaisluku, joka sisältää auton valmistusvuoden.
Metodit:
printData(): tulostaa auton merkin, mallin ja valmistusvuoden.
Car(string, string, int): konstruktori, jolla voidaan alustaa kaikki jäsenmuuttujat
Pääohjelmassa:

Luo vektori nimeltään carList. (Luo lista pinoon. Et siis tarvitse smart pointteria.)
Lisää kolme Car-luokan oliota listaan (keksi itse merkit, mallit ja vuosimallit)
Tulosta listan toisen alkion tiedot.
Tulosta kaikkien autojen tiedot käyttämällä for-silmukkaa.
    
