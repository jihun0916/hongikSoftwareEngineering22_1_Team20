#include "ItemInfoSearchUI.h"

//Function:PrintItem
//Description: 검색어에 해당하는 아이템이 존재한다면 정보를 출력한다.
//Parameter: 리스트, 키워드
//Return Value: X
//Created:2022/06/02 09:00 PM (updated)
//Author: B640016 신지훈

bool ItemInfoSearchUI::PrintItem(ItemList& _list, string key) {
	ofstream fout("output.txt", ios::app);
	list<Item>::iterator iter;
	for ( iter =_list.Items.begin(); iter != _list.Items.end();iter++) //순차적으로 키워드에 해당하는 아이템이 존재하는 지 검사
	{
		if (iter->GetItemName() == key) { //있다면
			iter->PrintElement(4, 1); //출력
			return true;
		}
	}
	return false;
}