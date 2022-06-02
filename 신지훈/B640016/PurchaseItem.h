#pragma once
#include "Main.h"
#include "PurchaseItemUI.h"

//Class: PurchaseItem (Control Class)
//Description: �������� �����ϴ� Ŭ����, ����ڿ� Ű����,������ ��ǰ�� �ִ� ����Ʈ, ������ ��ǰ�� ���� ���Ÿ���� �Ű������� �޴´�.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 ������
//mail: vv1663@naver.com

class PurchaseItem
{public:
	PurchaseItem(string ID, string key, ItemList& _list, map<string, ItemList>& _base);
private:
	PurchaseItemUI myUI;
};

