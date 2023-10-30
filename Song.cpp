#include "Song.h"


Song::Song(const Song& other):BaseSound(other)
{
	this->album = other.album;
	this->genre = other.genre;
	this->writer = other.writer;
	this->lng = other.lng;
}
istream& operator>>(istream& is, Song& song)
{
	BaseSound& base=song;
	is >> base;
	cout << "Enter album: ";
	getline(is, song.album);
	cout << "Enter gener: ";
	getline(is, song.genre);
	cout << "Enter writer: ";
	getline(is, song.writer);
	cout << "Enter language: ";
	getline(is, song.lng);
	is.ignore();
	cout << endl;

	return is;
}
ostream& operator<<(ostream& os, Song& song)
{
	BaseSound& base=song;
	os << base;
	os << "Album: " << song.album << endl;
	os << "Gener: " << song.genre << endl;
	os << "Writer: " << song.writer << endl;
	os << "Language: " << song.lng << endl<<endl;

	return os;
}
