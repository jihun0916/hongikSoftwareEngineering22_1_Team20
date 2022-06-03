#pragma once
#include "Main.h"
#include "ShowSoldItemsUI.h"

//Class: ShowSolditems (Control Class)
//Description: 판매완료된 아이템리스트를 출력하도록 제어한다. 바운더리클래스로 값을 넘겨준다.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈
//mail: vv1663@naver.com

class ShowSoldItems
{
public:
	ShowSoldItems(ItemList& _list) {
		myUI.PrintSoldItems(_list);
	}
private:
	ShowSoldItemsUI myUI;
};