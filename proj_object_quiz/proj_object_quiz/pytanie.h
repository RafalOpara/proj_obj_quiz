#include <iostream>

using namespace std;

class Pytanie
{
public:

	string tresc;
	string a, b, c, d;
	int nr_pytania;
	string poprawna;
	string odpowiedz;
	int punkt; // 1 lub 0 //

	void wczytaj(); //wczytuje dane z pliku
	void zadaj();  //pokazuje pytanie, czyta odpowiedz
	void sprawdz(); //sprawdza poprawnosc odpowiedzi

};