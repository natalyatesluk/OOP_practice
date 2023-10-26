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