#include "Wektor.h"


int Wektor::count = 0;
int Wektor::number = 0;

Wektor::Wektor(){
	x = 0;
	y = 0;
	z = 0;
	count++;
	number++;
	ktory_z_kolei = number;
}

Wektor::Wektor(float x, float y, float z): x(x), y(y), z(z) {
	count++;
	number++;
	ktory_z_kolei = number;
}
Wektor::~Wektor() {
	count--;
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

float Wektor::il_skalarny(Wektor a) {
	float wynik = (x * a.get_x()) + (a.get_y() * y) + (z * a.get_z());

	return wynik;
}