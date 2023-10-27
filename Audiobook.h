#pragma once
#include <iostream>
#include <string>
using namespace std;
class Audiobook
{
private:
	int id;
	string name;
	string artist;
	string publisher;
	int year;
	float time;
	float price;
	string format;
public:
	static int id_s;
	Audiobook() :name("/0"), artist("/0"), publisher("/0"), year(0), time(0), price(0), format("/0") { id_s++; id = id_s; }
	Audiobook(string name, string artist, string publisher, int year, float time, float price, string format) :
		name(name), artist(artist), publisher(publisher), year(year), time(time), price(price), format(format) {
		id_s++; id = id_s;
	}
	Audiobook(Audiobook& book);
	friend istream& operator>>(istream& is, Audiobook& book);
	friend ostream& operator<<(ostream& os, Audiobook& book);
};


