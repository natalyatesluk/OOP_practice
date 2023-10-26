#include "Song.h"
int Song::id_s = 0;

Song::Song(const Song& other)
{
	this->id = other.id;
	this->name = other.name;
	this->artist = other.artist;
	this->album = other.album;
	this->genre = other.genre;
	this->writer = other.writer;
	this->lng = other.lng;
	this->year = other.year;
	this->time = other.time;
}
istream& operator>>(istream& is, Song& song)
{
	cout << "Enter track name: ";
	getline(is, song.name);
	cout << "Enter artist: ";
	getline(is, song.artist);
	cout << "Enter album: ";
	getline(is, song.album);
	cout << "Enter gener: ";
	getline(is, song.genre);
	cout << "Enter writer: ";
	getline(is, song.writer);
	cout << "Enter language: ";
	getline(is, song.lng);
	cout << "Enter release yeare: ";
	is >> song.year;
	cout << "Enter track duration: ";
	is >> song.time;
	is.ignore();
	cout << endl;

	return is;
}
