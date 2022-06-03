#pragma once
#include "ItemList.h"
#include "ShowMyitemsUI.h"

//Class: ShowMyitems (Control Class)
//Description: �Ǹ����� �����۸���Ʈ�� ����ϵ��� �����Ѵ�. �ٿ����Ŭ������ ���� �Ѱ��ش�.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 ������
//mail: vv1663@naver.com

class ShowMyitems
{
public:
	ShowMyitems(ItemList& _itemlist) {
		myUI.SetList(_itemlist);
		myUI.PrintItems();
	}
private:

	ShowMyitemsUI myUI;
};