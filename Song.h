#pragma once
#include <iostream>
#include <string>
using namespace std;
class Song
{
	private:

		int id;
		string name;
		string artist;
		string album;
		string genre;
		string writer;
		string lng;
		int year;
		float time;
	public:
		static int id_s;
		Song() :name("/0"), artist("/0"), album("/0"), genre("/0"), writer("/0"), lng("/0"), year(0), time(0) { id_s++; id = id_s; }
		Song(string name_, string artist_, string album_, string genre_, string writer_, string lng_, int year_, float time_) :
			name(name_), artist(artist_), album(album_), genre(genre_), writer(writer_), lng(lng_), year(year_), time(time_) {
			id_s++; id = id_s;;
		}
		Song(const Song& other);
		~Song() { id_s--; }
		friend istream& operator>>(istream& is, Song& song);
		friend ostream& operator<<(ostream& os, Song& song);
		friend bool operator==(Song& song1, Song song2);
};

