#include "ShowSoldItemsUI.h"

//Function:PrintItem
//Description: 판매완료된 상품의 목록을 출력한다.
//Parameter: X
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈

void ShowSoldItemsUI::PrintSoldItems(ItemList& _list) {
	ofstream fout("output.txt", ios::app);
	fout << "3 3\n";
	list<Item>::iterator iter;
	for (iter = _list.Items.begin(); iter!= _list.Items.end();iter++)//순회하다가
	{
		if (iter->currentstate == state::UNSELLABLE)//수량이 없어서 판매완료된 물건들의 목록만 프린트
			iter->PrintElement(0,0);
	}
}