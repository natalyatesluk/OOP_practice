#include "Audiobook.h"


Audiobook::Audiobook(Audiobook& book) :BaseSound(book)
{
	this->publisher = book.publisher;
	this->price = book.price;
	this->format = book.format;
}

void Audiobook::play()
{
	cout << "<----- Play audiobook ----->";
}

void Audiobook::ShowDate()
{
	BaseSound::ShowDate();
	cout << "Publisher: " << publisher << endl;
	cout << "Price: " << price << "hrn" << endl;
	cout << "Format: " << format << endl << endl;
}


istream& operator>>(istream& is, Audiobook& book)
{
	BaseSound& base=book;
	is >> base;
	cout << "Enter publisher: ";
	getline(is, book.publisher);
	cout << "Enter format: ";
	getline(is, book.format);
	cout << "Enter price: ";
	is >> book.price;
	is.ignore();
	

	return is;
}

ostream& operator<<(ostream& os, Audiobook& book)
{
	BaseSound& base=book;
	os << base;
	os << "Publisher: " << book.publisher << endl;
	os << "Price: " << book.price << "hrn"<<endl;
	os << "Format: " << book.format << endl << endl;

	return os;
}
