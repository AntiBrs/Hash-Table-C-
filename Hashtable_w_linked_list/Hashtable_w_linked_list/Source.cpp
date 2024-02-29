#include<iostream>
#include "hash.h"
using namespace std;
int main()
{
	hash_table tabla;
	tabla.insert("anyad");
	tabla.insert("valaga");
	tabla.insert_FILE("Text.txt");
	//if (tabla.check("valaga")) tabla.print("valaga");
	tabla.printALL();

}