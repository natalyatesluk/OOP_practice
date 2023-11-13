#ifndef BASESOUND_H
#define BASESOUND_H
#pragma once
#include <iostream>
#include <string>
using namespace std;
class BaseSound
{
private:
    int id;
    string name;
    string artist;
    int year;
    float time;
public:
    static int id_s;
    BaseSound() :name("/0"), artist("/0"), year(0), time(0) { id_s++; id
            = id_s; }
    BaseSound(string name_, string artist_, int year_, float time_) :
        name(name_), artist(artist_), year(year_), time(time_) {
        id_s++; id = id_s;;
    }
    BaseSound(const BaseSound& base);
    ~BaseSound() { id_s--; }
    friend istream& operator>>(istream& is, BaseSound& book);
    friend ostream& operator<<(ostream& os, BaseSound& book);
    virtual void play()=0;
    virtual void ShowDate();
    int get_id(){return id;}
    string get_name(){return name;}
    string get_artist(){return artist;}
    void setYear(int year) { this->year = year; }
    void setTime(float time) { this->time = time; }
    int get_year(){return year;}
    float get_time(){return time;}
    void setId(int id) { this->id = id; }
    void setName(const string name) { this->name = name; }
    void setArtist(const string artist) { this->artist = artist; }
};


#endif // BASESOUND_H
