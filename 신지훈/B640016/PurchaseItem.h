#pragma once
#include "Main.h"
#include "PurchaseItemUI.h"
class PurchaseItem
{public:
	PurchaseItem(string ID, string key, ItemList& _list, map<string, ItemList>& _base);
private:
	PurchaseItemUI myUI;
};

