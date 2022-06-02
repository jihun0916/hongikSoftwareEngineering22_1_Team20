#include "PurchaseItem.h"

//Function:PurchaseItem
//Description: 4.1���� �˻��� ��ǰ�� �����Ѵ�. ���Ŵ� �ش� �������� ������ 1�� ���߰�, �ǸŰ����� 1�� �ø���.
//Parameter: X
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 ������

PurchaseItem::PurchaseItem(string ID, string key, ItemList& _list, map<string, ItemList>& _base) {
	Item it;
	list<Item>::iterator iter;
	for (iter= _list.Items.begin(); iter!= _list.Items.end(); iter++)
	{
		if (iter->GetItemName() == key) { //�����Ϸ��� ��ǰ�� �´ٸ�
			it = *iter;
			_base[ID].Items.push_back(it); //���ſϷ� ��Ͽ� �߰�
			iter->ReduceQuantity(); //���� 1�� ���� & �Ǹ� ���� 1�� ����
			myUI.SetItem(*iter); 
			myUI.PrintItem(); //�ٿ���� Ŭ�������� ���
		}
	}
}
