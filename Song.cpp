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
ostream& operator<<(ostream& os, Song& song)
{
	os << "Track number " << song.id << endl;
	os << "Name: " << song.name << endl;
	os << "Artist: " << song.artist << endl;
	os << "Album: " << song.album << endl;
	os << "Gener: " << song.genre << endl;
	os << "Writer: " << song.writer << endl;
	os << "Language: " << song.lng << endl;
	os << "Release yeare: " << song.year << endl;
	os << "Track duration: " << song.time << endl << endl;

	return os;
}
bool operator==(Song& song1, Song song2)
{
	if (song1.name == song2.name && song2.artist == song1.artist && song1.genre == song2.genre &&
		song1.album == song2.album && song2.writer == song1.writer && song1.lng == song2.lng &&
		song1.year == song2.year && song2.time == song1.time)
		return true;
	else
		return false;
}