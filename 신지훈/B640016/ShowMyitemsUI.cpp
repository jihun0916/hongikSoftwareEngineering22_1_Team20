#include "ShowMyitemsUI.h"

//Function:PrintItem
//Description: ����� ��ǰ�� ������ ����Ѵ�.
//Parameter: X
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 ������

void ShowMyitemsUI::PrintItems() {
	ofstream fout("output.txt",ios::app);
	fout << "3" << " " << "2" << endl;
	list<Item>::iterator iter;
	for (iter = it.Items.begin(); iter != it.Items.end(); iter++)//��ȸ�ϸ鼭 ��� ����Ʈ
	{
		iter->PrintElement(0, 0);
	}

}