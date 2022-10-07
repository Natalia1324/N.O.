#include<iostream>
#include"Wektor.h"

using namespace std;

int main() {

	Wektor zerowy;
	Wektor* zerowy_dynamiczny = new Wektor();
	Wektor jedynki(1, 1, 1);
	Wektor* jedynki_dynamiczne = new Wektor(1, 1, 1);

	Wektor tablica[2] = { jedynki, zerowy };
	
	//cout << tablica[1].get_x() << tablica[1].get_y() << tablica[1].get_z();

	//cout << zerowy.ktory_z_kolei << jedynki_dynamiczne->ktory_z_kolei;
	
	delete zerowy_dynamiczny;
	delete jedynki_dynamiczne;
	return 0;
}