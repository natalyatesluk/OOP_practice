#include "Audiobook.h"
int Audiobook::id_s = 0;
Audiobook::Audiobook(Audiobook& book)
{
	this->name = book.name;
	this->artist = book.artist;
	this->publisher = book.publisher;
	this->year = book.year;
	this->time = book.time;
	this->price = book.price;
	this->format = book.format;
}

istream& operator>>(istream& is, Audiobook& book)
{
	cout << "Enter book name: ";
	getline(is, book.name);
	cout << "Enter artist: ";
	getline(is, book.artist);
	cout << "Enter publisher: ";
	getline(is, book.publisher);
	cout << "Enter format: ";
	getline(is, book.format);
	cout << "Enter release yeare: ";
	is >> book.year;
	cout << "Enter book duration: ";
	is >> book.time;

	is.ignore();
	cout << endl;

	return is;
}

ostream& operator<<(ostream& os, Audiobook& book)
{
	os << "Book number " << book.id << endl;
	os << "Name: " << book.name << endl;
	os << "Artist: " << book.artist << endl;
	os << "Publisher: " << book.publisher << endl;
	os << "Release yeare: " << book.year << endl;
	os << "Book duration: " << book.time << endl;
	os << "Format: " << book.format << endl << endl;

	return os;
}