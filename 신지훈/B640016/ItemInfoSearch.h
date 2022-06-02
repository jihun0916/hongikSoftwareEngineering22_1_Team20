#pragma once
#include "ItemInfoSearchUI.h"
#include "Main.h"
class ItemInfoSearch
{public:
	ItemInfoSearch(string keyword, ItemList& _list) {
		IsExist = myUI.PrintItem(_list, keyword);
	}
	bool IsExist = false;
private:
	ItemInfoSearchUI myUI;

};

