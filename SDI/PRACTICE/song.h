#ifndef SONG_H
#define SONG_H
#pragma once
//#include "Base.h"
#include <string>
#include<iostream>
using namespace std;

class Song//:public BaseSound
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

    Song() :id(0),name("/0"), artist("/0"), album("/0"), genre("/0"), writer("/0"), lng("/0"), year(0), time(0) { }
    Song(int id_,string name_, string artist_, string album_, string genre_, string writer_, string lng_, int year_, float time_) :
        id(id_),name(name_), artist(artist_), album(album_), genre(genre_), writer(writer_), lng(lng_), year(year_), time(time_) { }
    Song(const Song& other);
    ~Song() { }
    int get_id(){return id;}
    string get_name(){return name;}
    string get_artist(){return artist;}
    string get_album(){return album;}
    string get_genre(){return genre;}
    string get_writer(){return writer;}
    string get_lng(){return lng;}
    void setId(int id) { this->id = id; }
    void setName(const std::string& name) { this->name = name; }
    void setArtist(const std::string& artist) { this->artist = artist; }
    void setAlbum(const std::string& album) { this->album = album; }
    void setGenre(const std::string& genre) { this->genre = genre; }
    void setWriter(const std::string& writer) { this->writer = writer; }
    void setLng(const std::string& lng) { this->lng = lng; }
    void setYear(int year) { this->year = year; }
    void setTime(float time) { this->time = time; }
    int get_year(){return year;}
    float get_time(){return time;}


    void play();
    void ShowDate();
};
#endif // SONG_H
