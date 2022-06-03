#pragma once
#include "Main.h"
#include "ItemList.h"

//Class: ShowPurchaseListUI (Boundary Class)
//Description: 넘겨받은 구매 리스트의 인자를 출력한다.
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 정서연
//mail: 0324_j@g.hongik.ac.kr

class ShowPurchaseListUI
{
public:
	void printPurchaseItems();
	void setList(ItemList& il) {
		it = il;
	}
private:
	ItemList it;
	char* name, * company;
	int price, quantity;
};