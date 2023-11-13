#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H


#pragma once
#include "basesound.h"
using namespace std;
class Audiobook : public BaseSound
{
private:
    string publisher;
    float price;
    string format;
public:
    Audiobook() :BaseSound(),price(0), format("/0") { }
    Audiobook(string name, string artist, string publisher, int year, float time, float price, string format) :
        BaseSound(name,artist,year,time), publisher(publisher), price(price), format(format) {}
    Audiobook(Audiobook& book);
    friend istream& operator>>(istream& is, Audiobook& book);
    friend ostream& operator<<(ostream& os, Audiobook& book);
    void play() override;
    void ShowDate() override;
    string get_publisher(){return publisher;}
    float get_price(){return price;}
    string get_format(){return format;}
    void set_publisher(string publisher){this->publisher=publisher;}
    void set_price(float price){this->price=price;}
    void set_format(string format){this->format=format;}
};




#endif // AUDIOBOOK_H
