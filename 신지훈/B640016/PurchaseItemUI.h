#pragma once
#include "Main.h"
class PurchaseItemUI
{public:
	void SetItem(Item _item) {
		it = _item;
	}
	void PrintItem();
private:
	Item it;
};

