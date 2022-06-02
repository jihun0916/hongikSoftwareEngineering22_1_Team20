#include "ShowMyitemsUI.h"

void ShowMyitemsUI::PrintItems() {
	ofstream fout("output.txt",ios::app);
	fout << "3" << " " << "2" << endl;
	list<Item>::iterator iter;
	for (iter = it.Items.begin(); iter != it.Items.end(); iter++)
	{
		iter->PrintElement(0, 0);
	}

}