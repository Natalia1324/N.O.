#include<iostream>
#include"Wektor.h"

using namespace std;

int main() {

	Wektor zerowy;
	Wektor* zerowy_dynamiczny = new Wektor();

	Wektor jedynki(1, 1, 1);
	Wektor* jedynki_dynamiczne = new Wektor(1, 1, 1);

	return 0;
}