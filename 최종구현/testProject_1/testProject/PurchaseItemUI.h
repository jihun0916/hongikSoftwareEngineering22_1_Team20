#pragma once
#include "Main.h"

//Class: PurchaseItemUI (Boundary Class)
//Description: �������� ã�Ƽ� �����ϰ� ������ �������� ������ ����Ѵ�.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 ������
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