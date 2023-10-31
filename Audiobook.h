#pragma once
#include "Base.h"
using namespace std;
class Audiobook : public BaseSound
{
private:
	string publisher;
	float price;
	string format;
public:
	Audiobook() :BaseSound(),price(0), format("/0") { }
	Audiobook(string name, string artist, string publisher, int year, float time, float price, string format) :
		BaseSound(name,artist,year,time), publisher(publisher), price(price), format(format) {}
	Audiobook(Audiobook& book);
	friend istream& operator>>(istream& is, Audiobook& book);
	friend ostream& operator<<(ostream& os, Audiobook& book);
	void play() override;
	void ShowDate() override;
};


