#include <iostream>
#include <string>
#include "linked_list.h"
#include<Windows.h>
#include <fstream>
#include "hash.h"

using namespace std;
unsigned int hash_table::hash(const string& name)
{
    unsigned long hash = 5381;
    int c = name.length();
    for (int i = 0; i < c; i++)
    {
        hash = ((hash << 5) + hash) + c;
    }
    return hash % (N / 10);
}

hash_table::hash_table()
{
    lista = new LinkedList[N / 10];
}
hash_table::~hash_table()
{
    for (int i = 0; i < N / 10; i++)
    {
        lista[i].~LinkedList();
    }
}
void hash_table::insert(string string)
{
    lista[hash(string)].insert(string);
}
void hash_table::print(string data)
{
    lista[hash(data)].display(data);
}
void hash_table::printALL()
{
    for (int i = 0; i < N / 10; i++)
    {
        lista[i].displayALL();
    }
}
bool hash_table::check(string string)
{
    return lista[hash(string)].search(string);
}
void hash_table::rmv(string string)
{
    lista[hash(string)].remove(string);
}
void hash_table::insert_FILE(const char* FILENAME)
{
    ifstream fin(FILENAME);
    int inputnr;
    fin >> inputnr;
    string u;
    getline(fin, u);
    for (int i = 0; i < inputnr; i++)
    {
        string data;
        getline(fin, data);
        lista[hash(data)].insert(data);
    }
}
