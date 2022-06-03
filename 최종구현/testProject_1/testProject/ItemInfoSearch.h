#pragma once
#include "ItemInfoSearchUI.h"
#include "Main.h"

//Class: ItemInfoSearch (Control Class)
//Description: Main �Լ��� ���� ����Ʈ�� Ű�� �Է¹޾� �ٿ���� Ŭ������ �ѱ��. 
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 ������
//mail: vv1663@naver.com

class ItemInfoSearch
{
public:
	ItemInfoSearch(string keyword, ItemList& _list) {
		IsExist = myUI.PrintItem(_list, keyword);
	}
	bool IsExist = false;
private:
	ItemInfoSearchUI myUI;
};
