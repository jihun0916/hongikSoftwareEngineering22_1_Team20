#include "ItemList.h"

bool ItemList::AddNewItem(char * _name, char* _company, int _price, int _quantity,string ID) {
	Item it ;
	it.SetElement(_name, _company, _price, _quantity,ID);
	try 
	{ 
		this->Items.push_back(it); 
		this->size++;

		list<Item>::iterator iter;
		int count = 0;
		for (iter = this->Items.begin(); iter != this->Items.end(); iter++)
		{
			cout << count << endl;
			iter->TestPrint();
			count++;
		}
		return true;
	}
	catch(exception e)
	{
		return false;
	}
}
