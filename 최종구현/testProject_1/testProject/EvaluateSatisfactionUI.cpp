#include "EvaluateSatisfactionUI.h"

//Function:evaluteItem
//Description: �Ѱܹ��� ��ǰ���� Ȯ���� �����Ѵٸ� ������ ���� �����Ͽ� ����Ѵ�.
//Parameter: ItemList& _list, string key, int _satisfaction
//Return Value: bool
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 ������

bool EvaluateSatisfactionUI::evaluteItem(ItemList& _list, string key, int _satisfaction) {
	ofstream fout("output.txt", ios::app);
	list<Item>::iterator iter;
	for (iter = _list.Items.begin(); iter != _list.Items.end(); iter++)
	{
		if (iter->GetItemName() == key) {
			iter->changeSatisfaction(_satisfaction);
			iter->PrintElement(4, 4);
			return true;
		}
	}
	return false;
}