#include "song.h"
using namespace std;

Song::Song(const Song& other)//:BaseSound(other)
{
    this->id= other.id;
    this->name = other.name;
    this->artist = other.artist;
    this->year = other.year;
    this->time = other.time;
    this->album = other.album;
    this->genre = other.genre;
    this->writer = other.writer;
    this->lng = other.lng;
}
void Song::play()
{
    cout << "<----- Play song ----->";
}
void Song::ShowDate()
{
    //BaseSound::ShowDate();
    cout << "Number " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Artist: " << artist << endl;
    cout << "Release year: " << year << endl;
    cout << "Duration: " << time << "minutes" << endl;
    cout << "Album: " << album << endl;
    cout << "Gener: " << genre << endl;
    cout << "Writer: " << writer << endl;
    cout << "Language: " << lng << endl << endl;
}
