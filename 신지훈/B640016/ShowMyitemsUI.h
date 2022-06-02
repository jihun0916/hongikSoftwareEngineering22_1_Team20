#pragma once
#include "Main.h"
#include "ItemList.h"
class ShowMyitemsUI
{public:
	void PrintItems();
	void SetList(ItemList& il) {
		it = il;
	}
private:
	ItemList it;
	char* name, * company;
	int price, quantity;
};

