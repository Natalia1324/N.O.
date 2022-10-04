#pragma once

class Wektor
{
	float x, y, z;
public:
	Wektor();
	Wektor(float x, float y, float z);
	~Wektor();

	float get_x();
	float get_y();
	float get_z();

	Wektor dodaj(Wektor a);
	Wektor odejmij(Wektor a);
	float il_skalarny();
};

