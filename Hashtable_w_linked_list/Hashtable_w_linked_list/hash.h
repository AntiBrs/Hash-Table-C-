#ifndef HASH_H
#define HASH_H
#include <iostream>
#include <string>
#include "linked_list.h"
#include <fstream>
using namespace std;

const int N = 10000;//10 000 maximalis adat fogadasara hatekony

extern class hash_table
{
public:
    unsigned int key;//hasitokulcs
    string data;//adat karakterlanc
    LinkedList* lista;//lancolt lista ami az adatokat tarolja
    hash_table();//konstruktor
    ~hash_table();//destruktor
    unsigned int hash(const string& String);//adott karakterlanc szerinti hasito fuggveny
    void insert(string string);//elem beillesztese, szukseges az adat
    void insert_FILE(const char* FILENAME);//fajlbol olvasva adott adat szerinti hasitassal valo beillesztes
    void print(string string);//elem kiiratasa
    void printALL();//minden elem kiiratasa
    bool check(string string);//benne van e az adott adattal rendelkezo elem
    void rmv(string string);//torles az adat szerint
};
#endif
