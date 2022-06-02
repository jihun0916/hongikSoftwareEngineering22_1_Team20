#pragma once
#include "ItemList.h"
#include "ShowMyitemsUI.h"

//Class: ShowMyitems (Control Class)
//Description: 판매중인 아이템리스트를 출력하도록 제어한다. 바운더리클래스로 값을 넘겨준다.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈
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

