#pragma once
#include "Main.h"
#include "ItemList.h"

//Class: ShowMyitemsUI (Boundary Class)
//Description: �Ѱܹ��� ����Ʈ(����� �Ǹ� �Ƿ� ��ǰ ����Ʈ)�� �ִ� ��� ���ڸ� ����Ѵ�.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 ������
//mail: vv1663@naver.com

class ShowMyitemsUI
{public:
	void PrintItems();
	void SetList(ItemList& il) {
		it = il;
	}
private:
	ItemList it;
	char* name, * company;
	int price, quantity;
};

