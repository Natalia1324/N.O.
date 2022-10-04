#include "Wektor.h"

Wektor::Wektor(){
	x = 0;
	y = 0;
	z = 0;
	++number;
}

Wektor::Wektor(float x, float y, float z): x(x), y(y), z(z) {
	//number++;
}
Wektor::~Wektor() {
	//number--;
}

float Wektor::get_x() {
	return x;
}
float Wektor::get_y() {
	return y;
}
float Wektor::get_z() {
	return z;
}

Wektor Wektor::dodaj(Wektor a) {
	float newx = this->get_x() + a.get_x();
	float newy = this->get_y() + a.get_y();
	float newz = this->get_z() + a.get_z();

	Wektor nowy(newx, newy, newz);
	
	return nowy;
}

Wektor Wektor::odejmij(Wektor a) {
	float newx = this->get_x() - a.get_x();
	float newy = this->get_y() - a.get_y();
	float newz = this->get_z() - a.get_z();

	Wektor nowy(newx, newy, newz);

	return nowy;
}

float Wektor::il_skalarny() {
	float wynik = x * y * z;

	return wynik;
}