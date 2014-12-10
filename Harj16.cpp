/*
Eetu Salo

Harjoitus 16 (Palautus vko 46)
Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
Tietueeseen talletetaan seuraavat tiedot:
etunimi (merkkijono; C:n merkkitaulukko)
sukunimi (merkkijono; C:n merkkitaulukko)
koulumatka (reaaliluku)
osoite (merkkijono; C:n merkkitaulukko)
postinumero (merkkijono; C:n merkkitaulukko)
kengannumero (kokonaisluku)

Ohjelma tulostaa lopuksi tietueen tiedot naytölle.


*/




#include <iostream>
using namespace std;

struct HKL
{
	char etu[20];
	char suku[20];
	float matka;
	char osoite[20];
	char posti[20];
	int kenka;
};

void main()
{
	HKL hkl;

	cout << "Anna etunimi: ";
	cin >> hkl.etu;
	cout << "Anna sukunimi: ";
	cin >> hkl.suku;
	cout << "Koulumatka (km): ";
	cin >> hkl.matka;
	cout << "Osoite: ";
	cin.get();
	cin.get(hkl.osoite, 20);
	cout << "Postinumero: ";
	cin >> hkl.posti;
	cout << "Kengannumero: ";
	cin >> hkl.kenka;

	cout << hkl.etu << " " << hkl.suku << " " << hkl.matka << " km " << hkl.osoite << " " << hkl.posti << " " << hkl.kenka<<" ";
}