#pragma once
#include "ItemList.h"
#include "ShowMyitemsUI.h"
class ShowMyitems
{
public:
	ShowMyitems(ItemList& _itemlist) {
		myUI.SetList(_itemlist);
		myUI.PrintItems();
	}
private:

	ShowMyitemsUI myUI;
};

