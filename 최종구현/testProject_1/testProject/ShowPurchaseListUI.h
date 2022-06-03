#pragma once
#include "Main.h"
#include "ItemList.h"

//Class: ShowPurchaseListUI (Boundary Class)
//Description: �Ѱܹ��� ���� ����Ʈ�� ���ڸ� ����Ѵ�.
//Created: 2022/06/03 08:00 AM (updated)
//Author: B811173 ������
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