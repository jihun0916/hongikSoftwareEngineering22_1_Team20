#pragma once
#include "ItemInfoSearchUI.h"
#include "Main.h"

//Class: ItemInfoSearch (Control Class)
//Description: Main 함수로 부터 리스트와 키를 입력받아 바운더리 클래스로 넘긴다. 
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈
//mail: vv1663@naver.com

class ItemInfoSearch
{public:
	ItemInfoSearch(string keyword, ItemList& _list) {
		IsExist = myUI.PrintItem(_list, keyword);
	}
	bool IsExist = false;
private:
	ItemInfoSearchUI myUI;

};

