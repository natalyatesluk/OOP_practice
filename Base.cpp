#include "Base.h"
int BaseSound::id_s = 0;

BaseSound::BaseSound(const BaseSound& base)
{
	this->name = base.name;
	this->artist = base.artist;
	this->year = base.year;
	this->time = base.time;
}
void BaseSound::ShowDate()
{
	cout << "Number " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Artist: " << artist << endl;
	cout << "Release year: " << year << endl;
	cout << "Duration: " << time << "minutes" << endl;
}
istream& operator>>(istream& is, BaseSound& book)
{
	is.ignore();
	cout << "Enter  name: ";
	getline(is, book.name);
	cout << "Enter artist: ";
	getline(is, book.artist);
	cout << "Enter release yeare: ";
	is >> book.year;
	cout << "Enter  duration: ";
	is >> book.time;

	is.ignore();


	return is;
}

ostream& operator<<(ostream& os, BaseSound& book)
{
	os << "\nNumber " << book.id << endl;
	os << "Name: " << book.name << endl;
	os << "Artist: " << book.artist << endl;
	os << "Release year: " << book.year << endl;
	os << "Duration: " << book.time << "minutes" << endl;

	return os;
}