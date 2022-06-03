#pragma once
#include "Main.h"

//Class: PurchaseItemUI (Boundary Class)
//Description: 아이템을 찾아서 구매하고 구매한 아이템의 정보를 출력한다.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈
//mail: vv1663@naver.com

class PurchaseItemUI
{
public:
	void SetItem(Item _item) {
		it = _item;
	}
	void PrintItem();
private:
	Item it;
};