#include "ItemInfoSearchUI.h"

//Function:PrintItem
//Description: �˻�� �ش��ϴ� �������� �����Ѵٸ� ������ ����Ѵ�.
//Parameter: ����Ʈ, Ű����
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 ������

bool ItemInfoSearchUI::PrintItem(ItemList& _list, string key) {
	ofstream fout("output.txt", ios::app);
	list<Item>::iterator iter;
		for (iter = _list.Items.begin(); iter != _list.Items.end(); iter++) //���������� Ű���忡 �ش��ϴ� �������� �����ϴ� �� �˻�
		{
			if (iter->GetItemName() == key) { //�ִٸ�
				iter->PrintElement(4, 1); //���
				return true;
				}
			}
		return false;
}