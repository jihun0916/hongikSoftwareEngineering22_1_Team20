#pragma once
#include "Main.h"
#include "ShowSoldItemsUI.h"
class ShowSoldItems
{public:
	ShowSoldItems(ItemList& _list) {
		myUI.PrintSoldItems(_list);
	}
private:
	ShowSoldItemsUI myUI;
};

