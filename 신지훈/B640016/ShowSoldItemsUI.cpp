#include "ShowSoldItemsUI.h"
void ShowSoldItemsUI::PrintSoldItems(ItemList& _list) {
	ofstream fout("output.txt", ios::app);
	fout << "3 3\n";
	list<Item>::iterator iter;
	for (iter = _list.Items.begin(); iter!= _list.Items.end();iter++)
	{
		if (iter->currentstate == state::UNSELLABLE)
			iter->PrintElement(0,0);
	}
}