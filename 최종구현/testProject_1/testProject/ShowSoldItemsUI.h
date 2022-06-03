#pragma once
#include "Main.h"

//Class: ShowSoldItemsUI (Boundary Class)
//Description: 넘겨받은 리스트(등록한 판매 의류 상품 리스트)에 있는 모든 인자중 판매상태가 '수량없음', 즉 판매완료 상품을 출력한다.
//Created: 2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈
//mail: vv1663@naver.com

class ShowSoldItemsUI
{
public:
	void PrintSoldItems(ItemList& _list);
private:
};
