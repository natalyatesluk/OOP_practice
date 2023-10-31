#pragma once
#include "Base.h"
using namespace std;

class Song:public BaseSound
{
	private:

		string album;
		string genre;
		string writer;
		string lng;
	public:
		
		Song() :BaseSound(),album("/0"), genre("/0"), writer("/0"), lng("/0") {  }
		Song(string name_, string artist_, string album_, string genre_, string writer_, string lng_, int year_, float time_) :
			 BaseSound(name_,artist_,year_,time_),album(album_), genre(genre_), writer(writer_), lng(lng_) { }
		Song(const Song& other);
		~Song() { }
		friend istream& operator>>(istream& is, Song& song);
		friend ostream& operator<<(ostream& os, Song& song);

		void play() override;
		void ShowDate() override;
};

