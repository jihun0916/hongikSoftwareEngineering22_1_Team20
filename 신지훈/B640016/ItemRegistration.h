#include <iostream>
#include "ItemList.h"
#include "ItemRegistrationUI.h"
using namespace std;

class ItemRegistration
{
public:
	ItemRegistration(char * _name, char* _company, int _price, int _quantity,ItemList &_list,ItemList &_totalList,string ID){
		_IsCreated = _list.AddNewItem(_name, _company, _price, _quantity,ID); 
		_totalList.AddNewItem(_name, _company, _price, _quantity,ID);
		if (_IsCreated) {
			RegistUI.name = _name;
			RegistUI.company = _company;
			RegistUI.price = _price;
			RegistUI.quantity = _quantity;

			RegistUI.PrintOutput();
			_IsCreated = false;
		}
	}
	/*	name(_name), company(_company), price(_price), quantity(_quantity){}*/

private:
	ItemList il;
	bool _IsCreated;
	ItemRegistrationUI RegistUI;
	/*W
	string name, company;
	int price, quantity;*/
};

