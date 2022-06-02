#include "PurchaseItem.h"

PurchaseItem::PurchaseItem(string ID, string key, ItemList& _list, map<string, ItemList>& _base) {
	Item it;
	list<Item>::iterator iter;
	for (iter= _list.Items.begin(); iter!= _list.Items.end(); iter++)
	{
		if (iter->GetItemName() == key) {
			it = *iter;
			_base[ID].Items.push_back(it);
			iter->ReduceQuantity();
			myUI.SetItem(*iter);
			myUI.PrintItem();
		}
	}
}
