/**
* @file b181210111_1A_Odev2
* @description Disaridan bir txt dosyasindan okutulan bilgilerin doubly linked liste yerlestirilip daha sonra ekrana bastirilmasi
* @course 1. Öğretim A Grubu
* @assignment 2. Ödev
* @date 26.11.2019
* @author Mücahid IŞIK mucahid.isik@ogr.sakarya.edu.tr , Hüseyin HIRA huseyin.hira@ogr.sakarya.edu.tr 
*/
#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node
{
public:
	Node* next;
	Node* prev;
	string data;
	int kacAdim = 0;

	Node(string kelime);
};

#endif
