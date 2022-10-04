#include "Wektor.h"

Wektor::Wektor(){
	x = 0;
	y = 0;
	z = 0;
}

Wektor::Wektor(float x, float y, float z): x(x), y(y), z(z) {
}

float Wektor::get_x() {
	return x;
}
float Wektor::get_y() {
	return y;
}
float Wektor::get_z() {

}