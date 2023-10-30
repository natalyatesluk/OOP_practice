#pragma once
#include <iostream>
#include <string>
using namespace std;
class BaseSound
{
private:
	int id;
	string name;
	string artist;
	int year;
	float time;
public:
	static int id_s;
	BaseSound() :name("/0"), artist("/0"), year(0), time(0) { id_s++; id = id_s; }
	BaseSound(string name_, string artist_, int year_, float time_) :
		name(name_), artist(artist_), year(year_), time(time_) {
		id_s++; id = id_s;;
	}
	BaseSound(const BaseSound& base);
	~BaseSound() { id_s--; }

	friend istream& operator>>(istream& is, BaseSound& book);
	friend ostream& operator<<(ostream& os, BaseSound& book);
};

