#pragma once
#include "Main.h"
#include "PurchaseItemUI.h"

//Class: PurchaseItem (Control Class)
//Description: 아이템을 구매하는 클래스, 사용자와 키워드,구매할 물품이 있는 리스트, 구매한 물품을 넣을 구매목록을 매개변수로 받는다.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈
//mail: vv1663@naver.com

class PurchaseItem
{public:
	PurchaseItem(string ID, string key, ItemList& _list, map<string, ItemList>& _base);
private:
	PurchaseItemUI myUI;
};

