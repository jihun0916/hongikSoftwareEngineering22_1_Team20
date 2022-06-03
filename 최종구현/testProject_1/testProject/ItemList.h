#pragma once
#include <iostream>
#include <list>
#include "Item.h"

using namespace std;
class ItemList
{
public:
	bool AddNewItem(char* _name, char* _company, int _price, int _quantity, int _satisfaction, string ID);
	list<Item> Items;
	int size = 0;

private:

};