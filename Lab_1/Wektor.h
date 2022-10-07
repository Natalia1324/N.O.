#pragma once

class Wektor
{
	float x, y, z;

	static int count;
	static int number;
	int ktory_z_kolei;

public:
	Wektor();
	Wektor(float x, float y, float z);
	~Wektor();
	
	float get_x();
	float get_y();
	float get_z();

	Wektor dodaj(Wektor a);
	Wektor odejmij(Wektor a);
	float il_skalarny(Wektor a);
};

