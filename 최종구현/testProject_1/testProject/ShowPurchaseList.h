#pragma once
#include "ItemList.h"
#include "ShowPurchaseListUI.h"

//Class: ShowPurchaseList (Control Class)
//Description: ������ ������ ����Ʈ ����� �����Ѵ�. �ٿ���� Ŭ������ ���� �ѱ��.
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 ������
//mail: 0324_j@g.hongik.ac.kr

class ShowPurchaseList
{
public:
	ShowPurchaseList(ItemList& _itemlist) {
		myUI.setList(_itemlist);
		myUI.printPurchaseItems();
	}
private:
	ShowPurchaseListUI myUI;
};