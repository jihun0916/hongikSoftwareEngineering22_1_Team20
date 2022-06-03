#include "EvaluateSatisfactionUI.h"

//Function:evaluteItem
//Description: 넘겨받은 상품명을 확인해 존재한다면 만족도 값을 변경하여 출력한다.
//Parameter: ItemList& _list, string key, int _satisfaction
//Return Value: bool
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 정서연

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