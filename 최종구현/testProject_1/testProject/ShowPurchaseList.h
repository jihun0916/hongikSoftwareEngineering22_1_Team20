#pragma once
#include "ItemList.h"
#include "ShowPurchaseListUI.h"

//Class: ShowPurchaseList (Control Class)
//Description: 구매한 아이템 리스트 출력을 제어한다. 바운더리 클래스로 값을 넘긴다.
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 정서연
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