#include "ItemInfoSearchUI.h"

bool ItemInfoSearchUI::PrintItem(ItemList& _list, string key) {
	ofstream fout("output.txt", ios::app);
	list<Item>::iterator iter;
	for ( iter =_list.Items.begin(); iter != _list.Items.end();iter++)
	{
		if (iter->GetItemName() == key) {
			iter->PrintElement(4, 1);
			return true;
		}
	}
	return false;
}