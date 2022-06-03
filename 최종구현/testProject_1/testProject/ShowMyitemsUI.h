#pragma once
#include "Main.h"
#include "ItemList.h"

//Class: ShowMyitemsUI (Boundary Class)
//Description: 넘겨받은 리스트(등록한 판매 의류 상품 리스트)에 있는 모든 인자를 출력한다.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈
//mail: vv1663@naver.com

class ShowMyitemsUI
{
public:
	void PrintItems();
	void SetList(ItemList& il) {
		it = il;
	}
private:
	ItemList it;
	char* name, * company;
	int price, quantity;
};