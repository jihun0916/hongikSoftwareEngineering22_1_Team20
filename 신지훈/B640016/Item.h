#pragma once
#include <iostream>
#include <fstream>

using namespace std;
enum class state
{
	SELLABLE,
	UNSELLABLE

};
class Item
{
public:
	void SetElement(char* _name, char* _company, int _price, int _quantity, string ID);
	void TestPrint();
	void PrintElement(int menu1, int menu2);
	void ReduceQuantity() {
		if (currentstate == state::SELLABLE) {
			this->quantity--;
			this->sellCount++;
			if (quantity == 0)
				currentstate = state::UNSELLABLE;
		}
	}
	string GetItemName() { return name; }
	state currentstate = state::SELLABLE;
private:
	
	string name;
	string company;
	string ID;
	int price, quantity, sellCount = 0;
	int satisfaction = 0;
\
};

