#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string data;//karakterlanc tipusu adat
    Node* next;//kovetkezo elemre muato mutato
    Node(string data);//konstruktor
};

class LinkedList
{
public:
    Node* head;//lista fejere mutato pointer
    LinkedList();//konstruktor
    ~LinkedList();//destruktor
    void insert(string data);//beillesztes
    void displayALL();//osszes adat kiiratasa
    void display(string data);//adat szerinti kereses es kiiratas
    bool search(string data);//adat szerinti kereses
    void remove(string data);//torles a adat szerint
};

#endif

